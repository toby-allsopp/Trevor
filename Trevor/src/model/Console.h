/*
 * Console.h
 *
 *  Created on: 7/02/2013
 *      Author: Toby
 */

#ifndef CONSOLE_H_
#define CONSOLE_H_

#include <string>

namespace trevor {

class Console {
public:
	Console();
	virtual ~Console() {
		// TODO Auto-generated destructor stub
	}

	virtual void print(const std::string &str) = 0;
	virtual void print(const char* fmt, ...) __attribute__((format(printf, 2, 3))) = 0;
};

} /* namespace trevor */
#endif /* CONSOLE_H_ */
