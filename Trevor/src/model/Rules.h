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
	static AttackResult notPossible() {
		AttackResult r = { false, false, 0 };
		return r;
	}
	static AttackResult miss() {
		AttackResult r = { true, false, 0 };
		return r;
	}
	static AttackResult hit(int damage) {
		AttackResult r = { true, true, damage };
		return r;
	}
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
