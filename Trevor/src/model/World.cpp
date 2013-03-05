/*
 * World.cpp
 *
 *  Created on: 7/02/2013
 *      Author: Toby
 */

#include "World.h"

namespace trevor {

static struct CompareTurnOrder {
	bool operator()(const std::shared_ptr<Character> &l, const std::shared_ptr<Character> &r) {
		return l->getInitiative() < r->getInitiative();
	}
} sCompareTurnOrder;

World::World() {
	// TODO Auto-generated constructor stub

}

void World::addCharacter(std::shared_ptr<Character> character) {
	mCharacters.push_back(character);
}

void World::processTurn() {
	auto characters = mCharacters;
	std::sort(characters.begin(), characters.end(), sCompareTurnOrder);
	for (const auto& c : characters) {
		c->takeTurn(*this);
	}
}

void World::visitContents(const Observer& observer) {
	for (const auto &c : mCharacters) {
		observer.observeCharacter(*c);
	}
}

} /* namespace trevor */
