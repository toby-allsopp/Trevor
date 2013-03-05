/*
 * HumanBrain.cpp
 *
 *  Created on: 7/02/2013
 *      Author: Toby
 */

#include "HumanBrain.h"
#include "Console.h"
#include "World.h"

namespace trevor {

class HumanBrain::Observer : public trevor::Observer {
public:
	Observer(HumanBrain &humanBrain, Character &me) : mHumanBrain(humanBrain), mMe(me) {}
	virtual void observeCharacter(const Character &character) const;
private:
	HumanBrain &mHumanBrain;
	Character &mMe;
};

HumanBrain::HumanBrain() {
	// TODO Auto-generated constructor stub

}

void HumanBrain::takeTurn(World &world, Character &me) {
	Observer observer(*this, me);
	world.visitContents(observer);
}

void HumanBrain::Observer::observeCharacter(const Character &character) const {
	if (&character == &mMe) {
		mHumanBrain.mConsole->print("You see yourself!");
	} else {
		mHumanBrain.mConsole->print("You see a character!");
	}
}

} /* namespace trevor */
