/*
 * TextConsole.h
 *
 *  Created on: 7/02/2013
 *      Author: Toby
 */

#ifndef TEXTCONSOLE_H_
#define TEXTCONSOLE_H_

#include "model/Console.h"

namespace trevor {

class TextConsole: public trevor::Console {
public:
	TextConsole(const std::string &name);
	virtual ~TextConsole() {
		// TODO Auto-generated destructor stub
	}

	void print(const std::string &str);
	void print(const char* fmt, ...);

private:
	std::string mName;
};

} /* namespace trevor */
#endif /* TEXTCONSOLE_H_ */
