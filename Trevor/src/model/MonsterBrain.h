/*
 * MonsterBrain.h
 *
 *  Created on: 5/03/2013
 *      Author: Toby
 */

#ifndef MONSTERBRAIN_H_
#define MONSTERBRAIN_H_

#include "Brain.h"
#include "Observer.h"

#include <memory>

namespace trevor {

class Console;

class MonsterBrain: public Brain {
public:
	MonsterBrain(std::unique_ptr<Console> console);

	// Brain

	void takeDamage(Character &me, const Character& attacker, int damage)
			override;

	void takeTurn(World &world, Turn &turn, Character &me) override;

private:
	std::unique_ptr<Console> mConsole;
};

} /* namespace trevor */
#endif /* MONSTERBRAIN_H_ */
