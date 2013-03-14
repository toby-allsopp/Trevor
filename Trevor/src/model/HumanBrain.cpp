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
			mHumanBrain(humanBrain), mTurn(turn), mMe(me) {
	}
	virtual void observeCharacter(Character &character) const;
private:
	HumanBrain &mHumanBrain;
	Turn &mTurn;
	Character &mMe;
};

HumanBrain::HumanBrain() {
	// TODO Auto-generated constructor stub

}

void HumanBrain::takeDamage(const Character& attacker, int damage) {
	mConsole->print("Ouch! Took %d damage", damage);
}

void HumanBrain::onInflictedDamage(const Character& target, int damage) {
	mConsole->print("Take that! Inflicted %d damage", damage);
}

void HumanBrain::takeTurn(World &world, Turn &turn, Character &me) {
	Observer observer(*this, turn, me);
	world.visitContents(observer);
}

void HumanBrain::Observer::observeCharacter(Character &character) const {
	if (&character == &mMe) {
		mHumanBrain.mConsole->print("You see yourself!");
	} else {
		mHumanBrain.mConsole->print("You see a character!");
		if (mTurn.attack(character)) {
			mHumanBrain.mConsole->print("Attacked it!");
		} else {
			mHumanBrain.mConsole->print("Couldn't attack it :(");
		}
	}
}

} /* namespace trevor */
