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

class Rules {
public:
	Rules();
	virtual ~Rules() {
		// TODO Auto-generated destructor stub
	}

	bool attack(Character& attacker, Character& target) const;

private:
	mutable Dice mDice;
};

} /* namespace trevor */
#endif /* RULES_H_ */
