/*
 * Turn.h
 *
 *  Created on: 12/03/2013
 *      Author: Toby
 */

#ifndef TURN_H_
#define TURN_H_

#include "Rules.h"

#include <memory>

namespace trevor {

class Character;
class World;

class Turn {
public:
	explicit Turn(World &world, const Rules &rules, std::shared_ptr<Character> character);
	virtual ~Turn() {
		// TODO Auto-generated destructor stub
	}

	/**
	 *
	 * @param foe
	 * @return whether the attack was possible
	 */
	AttackResult attack(Character& foe);

private:
	World &mWorld;
	const Rules &mRules;
	std::shared_ptr<Character> mCharacter;
};

} /* namespace trevor */
#endif /* TURN_H_ */
