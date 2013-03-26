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

using namespace trevor;

int main()
{
	World w;
	auto c = std::make_shared<Character>();
	auto brain = std::make_shared<HumanBrain>();
	auto youConsole = std::make_shared<TextConsole>("You");
	brain->setConsole(youConsole);
	c->setBrain(brain);
	w.addCharacter(c);
	auto monster = std::make_shared<Character>();
	monster->setBrain(std::make_shared<MonsterBrain>(make_unique<TextConsole>("Monster")));
	w.addCharacter(monster);
	w.processTurn();
	return 0;
}
