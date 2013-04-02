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

Character::Character(const std::string &name) :
		mName(name), mLevel(1), mXP(0), mMaxHP(6), mHP(mMaxHP) {
}

void Character::takeDamage(const Character& attacker, int damage) {
	mHP -= damage;
	mBrain->takeDamage(*this, attacker, damage);
}

void Character::takeTurn(World& world, Turn &turn) {
	mBrain->takeTurn(world, turn, *this);
}

} /* namespace trevor */
