/*
 * World.h
 *
 *  Created on: 7/02/2013
 *      Author: Toby
 */

#ifndef WORLD_H_
#define WORLD_H_

#include "Character.h"

#include <algorithm>
#include <memory>
#include <vector>

namespace trevor {

class World {
public:
	World();
	virtual ~World() {
		// TODO Auto-generated destructor stub
	}

	void addCharacter(std::shared_ptr<Character> character);

	void processTurn();

private:
	std::vector<std::shared_ptr<Character>> mCharacters;
};

} /* namespace trevor */
#endif /* WORLD_H_ */