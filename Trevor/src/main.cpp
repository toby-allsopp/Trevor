/*
 * main.cpp
 *
 *  Created on: 22/01/2013
 *      Author: Toby
 */

#include "model/World.h"
#include "model/Character.h"
#include "model/HumanBrain.h"
#include "model/MonsterBrain.h"
#include "TextConsole.h"
#include "utils.h"

#include <iostream>
#include <sstream>

using namespace trevor;

int main() {
	World w;
	auto c = std::make_shared<Character>("You");
	auto brain = std::make_shared<HumanBrain>();
	auto youConsole = std::make_shared<TextConsole>("You");
	brain->setConsole(youConsole);
	c->setBrain(brain);
	c->setMaxHP(12);
	c->setHP(c->getMaxHP());
	w.addCharacter(c);
	for (int i = 0; i < 2; ++i) {
		std::ostringstream nameStream;
		nameStream << "Monster " << i;
		auto name = nameStream.str();
		auto monster = std::make_shared<Character>(name);
		monster->setBrain(
				std::make_shared<MonsterBrain>(
						make_unique<TextConsole>(name)));
		w.addCharacter(monster);
	}
	while (c->getHP() > 0) {
		w.processTurn();
	}
	return 0;
}
