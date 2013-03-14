/*
 * MonsterBrain.h
 *
 *  Created on: 5/03/2013
 *      Author: Toby
 */

#ifndef MONSTERBRAIN_H_
#define MONSTERBRAIN_H_

#include "Brain.h"

namespace trevor {

class MonsterBrain: public trevor::Brain {
public:
	MonsterBrain();
	virtual ~MonsterBrain() {
		// TODO Auto-generated destructor stub
	}

	void takeDamage(const Character& attacker, int damage) override;

	void onInflictedDamage(const Character& target, int damage) override;

	void takeTurn(World &world, Turn &turn, Character &me) override;

};

} /* namespace trevor */
#endif /* MONSTERBRAIN_H_ */
