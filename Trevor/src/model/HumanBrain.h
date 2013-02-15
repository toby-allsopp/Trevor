/*
 * HumanBrain.h
 *
 *  Created on: 7/02/2013
 *      Author: Toby
 */

#ifndef HUMANBRAIN_H_
#define HUMANBRAIN_H_

#include "Brain.h"

#include <memory>

namespace trevor {

class Console;

class HumanBrain: public trevor::Brain {
public:
	HumanBrain();
	virtual ~HumanBrain() {
		// TODO Auto-generated destructor stub
	}

	void setConsole(std::shared_ptr<Console> console) {
		mConsole = console;
	}

private:
	std::shared_ptr<Console> mConsole;
};

} /* namespace trevor */
#endif /* HUMANBRAIN_H_ */