/*
 * Character.cpp
 *
 *  Created on: 22/01/2013
 *      Author: Toby
 */

#include "Character.h"
#include "Brain.h"
#include "World.h"

namespace trevor {

Character::Character() {
	// TODO Auto-generated constructor stub

}

void Character::takeDamage(const Character& attacker, int damage) {
	mBrain->takeDamage(attacker, damage);
}

void Character::takeTurn(World& world, Turn &turn) {
	mBrain->takeTurn(world, turn, *this);
}

} /* namespace trevor */
