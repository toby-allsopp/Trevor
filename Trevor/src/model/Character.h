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
	Character(const std::string &name);
	virtual ~Character() {
		// TODO Auto-generated destructor stub
	}

	std::string getName() const {
		return mName;
	}

	void setBrain(std::shared_ptr<Brain> brain) {
		mBrain = brain;
	}

	int getMaxHP() const {
		return mMaxHP;
	}

	void setMaxHP(int maxHP) {
		mMaxHP = maxHP;
	}

	int getHP() const {
		return mHP;
	}

	void setHP(int hp) {
		mHP = hp;
	}

	int getLevel() const {
		return mLevel;
	}

	void setLevel(int level) {
		mLevel = level;
	}

	int getXP() const {
		return mXP;
	}

	void setXP(int xp) {
		mXP = xp;
	}

	int getInitiative() {
		return 0;
	}

	int getAttackPoints() { return 1; }

	int getDefensePoints() { return 10; }

	int getAttackDamage(Dice &dice) { return dice.d6(); }

	void takeDamage(const Character& attacker, int damage);

	void takeTurn(World& world, Turn &turn);

	// Observable

	void observe(Observer &observer) override {
		observer.observeCharacter(*this);
	}

private:
	std::string mName;
	std::shared_ptr<Brain> mBrain;
	int mLevel;
	int mXP;
	int mMaxHP;
	int mHP;
};

} /* namespace trevor */
#endif /* CHARACTER_H_ */
