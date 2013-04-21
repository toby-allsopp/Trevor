/*
 * HumanBrain.cpp
 *
 *  Created on: 7/02/2013
 *      Author: Toby
 */

#include "HumanBrain.h"
#include "Console.h"
#include "Turn.h"
#include "World.h"

namespace trevor {

class HumanBrain::Observer: public trevor::Observer {
public:
	Observer(HumanBrain &humanBrain, Turn &turn, Character &me) :
		mSawSomeoneElseAlive(false), mHumanBrain(humanBrain), mTurn(turn), mMe(me) {
	}
	virtual void observeCharacter(Character &character) override;
	bool mSawSomeoneElseAlive;
private:
	HumanBrain &mHumanBrain;
	Turn &mTurn;
	Character &mMe;
};

HumanBrain::HumanBrain() {
	// TODO Auto-generated constructor stub

}

void HumanBrain::takeDamage(Character &me, const Character& attacker, int damage) {
	mConsole->print("Ouch! Took %d damage from %s", damage, attacker.getName().c_str());
	if (me.getHP() <= 0) {
		mConsole->print("I am dead :(");
	}
}

void HumanBrain::takeTurn(World &world, Turn &turn, Character &me) {
	Observer observer(*this, turn, me);
	world.visitContents(observer);
	if (!observer.mSawSomeoneElseAlive) {
		mConsole->print("All alone, goodbye.");
		me.setHP(0);
	}
}

void HumanBrain::Observer::observeCharacter(Character &character) {
	if (&character == &mMe) {
		mHumanBrain.mConsole->print("You see yourself!");
		mHumanBrain.mConsole->print("You have %d/%d HP", mMe.getHP(),
				mMe.getMaxHP());
	} else {
		mHumanBrain.mConsole->print("You see %s!", character.getName().c_str());
		mHumanBrain.mConsole->print("It has %d/%d HP", character.getHP(),
				character.getMaxHP());
		if (mTurn.finished()) {
			return;
		}
		if (character.getHP() > 0) {
			mSawSomeoneElseAlive = true;
			auto result = mTurn.attack(character);
			if (result.mPossible) {
				mHumanBrain.mConsole->print("Attacked it!");
				if (result.mHit) {
					mHumanBrain.mConsole->print(
							"Take that! Inflicted %d damage", result.mDamage);
				} else {
					mHumanBrain.mConsole->print("Missed.");
				}
			} else {
				mHumanBrain.mConsole->print("Couldn't attack it :(");
			}
		} else {
			mHumanBrain.mConsole->print("It's dead.");
		}
	}
}

} /* namespace trevor */
