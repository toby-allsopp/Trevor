/*
 * TextConsole.cpp
 *
 *  Created on: 7/02/2013
 *      Author: Toby
 */

#include "TextConsole.h"

#include <iostream>

namespace trevor {

TextConsole::TextConsole() {
	std::cerr << "TextConsole begin" << std::endl;
}

void TextConsole::print(const std::string &str)
{
	std::cerr << str << std::endl;
}

} /* namespace trevor */
