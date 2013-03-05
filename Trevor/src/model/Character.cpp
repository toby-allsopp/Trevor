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

void Character::takeTurn(World& world) {
	mBrain->takeTurn(world, *this);
}

} /* namespace trevor */
