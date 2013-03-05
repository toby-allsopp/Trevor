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

#include <iostream>

using namespace trevor;

int main()
{
	std::cout << "Start\n";
	World w;
	std::shared_ptr<Character> c(new Character);
	std::shared_ptr<HumanBrain> brain(new HumanBrain);
	std::shared_ptr<TextConsole> console(new TextConsole);
	brain->setConsole(console);
	c->setBrain(brain);
	w.addCharacter(c);
	auto monster = std::make_shared<Character>();
	monster->setBrain(std::make_shared<MonsterBrain>());
	w.addCharacter(monster);
	w.processTurn();
	return 0;
}
