/*
 * Rules.h
 *
 *  Created on: 12/03/2013
 *      Author: Toby
 */

#ifndef RULES_H_
#define RULES_H_

#include "Dice.h"

namespace trevor {

class Character;

class AttackResult {
public:
	static AttackResult notPossible() { return AttackResult { false, false, 0 }; }
	static AttackResult miss() { return AttackResult { true, false, 0 }; }
	static AttackResult hit(int damage) { return AttackResult { true, true, damage }; }
	bool mPossible;
	bool mHit;
	int mDamage;
};

class Rules {
public:
	Rules();
	virtual ~Rules() {
		// TODO Auto-generated destructor stub
	}

	AttackResult attack(Character& attacker, Character& target) const;

private:
	mutable Dice mDice;
};

} /* namespace trevor */
#endif /* RULES_H_ */
