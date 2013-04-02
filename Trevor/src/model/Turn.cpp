/*
 * Turn.cpp
 *
 *  Created on: 12/03/2013
 *      Author: Toby
 */

#include "Turn.h"
#include "Rules.h"

namespace trevor {

Turn::Turn(World &world, const Rules &rules,
		std::shared_ptr<Character> character) :
		mWorld(world), mRules(rules), mCharacter(character), mFinished(false) {
	// TODO Auto-generated constructor stub

}

bool Turn::finished() const {
	return mFinished;
}
AttackResult Turn::attack(Character& foe) {
	if (mFinished) {
		return AttackResult::notPossible();
	}
	const AttackResult &result = mRules.attack(*mCharacter, foe);
	if (result.mPossible) {
		mFinished = true;
	}
	return result;
}

} /* namespace trevor */
