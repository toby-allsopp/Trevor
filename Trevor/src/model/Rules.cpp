/*
 * Rules.cpp
 *
 *  Created on: 12/03/2013
 *      Author: Toby
 */

#include "Rules.h"
#include "Character.h"

namespace trevor {

Rules::Rules() {
	// TODO Auto-generated constructor stub

}

bool Rules::attack(Character& attacker, Character& target) const {
	int attackPoints = attacker.getAttackPoints();
	int defensePoints = target.getDefensePoints();
	int roll = mDice.d20();
	if (roll == 20 || attackPoints + roll > defensePoints) {
		// Hit!
		int damage = attacker.getAttackDamage(mDice);
		attacker.onInflictedDamage(target, damage);
		target.takeDamage(attacker, damage);
	}
	return true;
}

} /* namespace trevor */
