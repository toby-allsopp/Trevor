/*
 * MonsterBrain.cpp
 *
 *  Created on: 5/03/2013
 *      Author: Toby
 */

#include "MonsterBrain.h"
#include "Console.h"
#include "Turn.h"
#include "World.h"

namespace trevor {

MonsterBrain::MonsterBrain(std::unique_ptr<Console> console) :
		mConsole(std::move(console)) {
	// TODO Auto-generated constructor stub

}

void MonsterBrain::takeDamage(Character &me, const Character& attacker,
		int damage) {
	mConsole->print("Yelp!");
}

class MonsterBrainObserver: public Observer {
public:
	MonsterBrainObserver(Console &console, Turn &turn, Character &me) :
			mConsole(console), mTurn(turn), mMe(me) {
	}
	void observeCharacter(Character &character) override {
		if (mTurn.finished())
			return;
		if (&character == &mMe) {

		} else {
			if (character.getHP() > 0) {
				AttackResult result = mTurn.attack(character);
			}
		}
	}

private:
	Console &mConsole;
	Turn &mTurn;
	Character &mMe;
};

void MonsterBrain::takeTurn(World &world, Turn &turn, Character &me) {
	MonsterBrainObserver observer(*mConsole, turn, me);
	world.visitContents(observer);
}

} /* namespace trevor */
