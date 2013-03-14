/*
 * MonsterBrain.cpp
 *
 *  Created on: 5/03/2013
 *      Author: Toby
 */

#include "MonsterBrain.h"

namespace trevor {

MonsterBrain::MonsterBrain() {
	// TODO Auto-generated constructor stub

}

void MonsterBrain::takeDamage(const Character& attacker, int damage) {
	//mConsole->print("Yelp!");
}

void MonsterBrain::onInflictedDamage(const Character& target, int damage) {
	//mConsole->print("Roar!");
}

void MonsterBrain::takeTurn(World &world, Turn &turn, Character &me) {
}

} /* namespace trevor */
