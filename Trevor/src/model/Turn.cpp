/*
 * Turn.cpp
 *
 *  Created on: 12/03/2013
 *      Author: Toby
 */

#include "Turn.h"
#include "Rules.h"

namespace trevor {

Turn::Turn(World &world, const Rules &rules, std::shared_ptr<Character> character) :
		mWorld(world),
		mRules(rules),
		mCharacter(character) {
	// TODO Auto-generated constructor stub

}

AttackResult Turn::attack(Character& foe) {
	return mRules.attack(*mCharacter, foe);
}

} /* namespace trevor */
