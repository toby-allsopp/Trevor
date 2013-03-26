/*
 * TextConsole.cpp
 *
 *  Created on: 7/02/2013
 *      Author: Toby
 */

#include "TextConsole.h"

#include <iostream>
#include <cstdarg>
#include <cstdio>

namespace trevor {

TextConsole::TextConsole(const std::string &name) : mName(name) {
	std::cerr << mName << ": TextConsole begin" << std::endl;
}

void TextConsole::print(const char* fmt, ...) {
	std::fprintf(stderr, "%s: ", mName.c_str());
	std::va_list args;
	va_start(args, fmt);
	std::vfprintf(stderr, fmt, args);
	va_end(args);
	std::fprintf(stderr, "\n");
}

void TextConsole::print(const std::string &str)
{
	print("%s", str.c_str());
}

} /* namespace trevor */
