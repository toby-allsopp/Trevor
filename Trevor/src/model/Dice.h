/*
 * Dice.h
 *
 *  Created on: 14/03/2013
 *      Author: Toby
 */

#ifndef DICE_H_
#define DICE_H_

#include <random>

namespace trevor {

class Dice {
public:
	Dice();
	virtual ~Dice() {
		// TODO Auto-generated destructor stub
	}

	int d6() {
		return dist_d6(mGenerator);
	}

	int d20() {
		return dist_d20(mGenerator);
	}

private:
	std::default_random_engine mGenerator;
	std::uniform_int_distribution<int> dist_d6;
	std::uniform_int_distribution<int> dist_d20;
};

} /* namespace trevor */
#endif /* DICE_H_ */
