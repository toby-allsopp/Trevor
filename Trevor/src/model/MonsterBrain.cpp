/*
 * MonsterBrain.cpp
 *
 *  Created on: 5/03/2013
 *      Author: Toby
 */

#include "MonsterBrain.h"
#include "Console.h"

namespace trevor {

MonsterBrain::MonsterBrain(std::unique_ptr<Console> console) : mConsole(std::move(console)) {
	// TODO Auto-generated constructor stub

}

void MonsterBrain::takeDamage(const Character& attacker, int damage) {
	mConsole->print("Yelp!");
}

void MonsterBrain::takeTurn(World &world, Turn &turn, Character &me) {
}

} /* namespace trevor */
