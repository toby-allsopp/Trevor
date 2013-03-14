/*
 * Character.h
 *
 *  Created on: 22/01/2013
 *      Author: Toby
 */

#ifndef CHARACTER_H_
#define CHARACTER_H_

#include "Dice.h"
#include "Observable.h"

#include <memory>

namespace trevor {

class Brain;
class Turn;
class World;

class Character: public Observable {
public:
	Character();
	virtual ~Character() {
		// TODO Auto-generated destructor stub
	}

	void setBrain(std::shared_ptr<Brain> brain) {
		mBrain = brain;
	}

	int getInitiative() {
		return 0;
	}

	int getAttackPoints() { return 10; }

	int getDefensePoints() { return 10; }

	int getAttackDamage(Dice &dice) { return dice.d6(); }

	void takeDamage(const Character& attacker, int damage);

	void onInflictedDamage(const Character& target, int damage);

	void takeTurn(World& world, Turn &turn);

	// Observable

	void observe(const Observer &observer) {
		observer.observeCharacter(*this);
	}

private:
	std::shared_ptr<Brain> mBrain;
};

} /* namespace trevor */
#endif /* CHARACTER_H_ */
