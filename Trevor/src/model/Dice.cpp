/*
 * Dice.cpp
 *
 *  Created on: 14/03/2013
 *      Author: Toby
 */

#include "Dice.h"

#include <chrono>

namespace trevor {

Dice::Dice() :
		dist_d6(1, 6), dist_d20(1, 20) {
	mGenerator.seed(
			std::chrono::system_clock::now().time_since_epoch().count());
}

} /* namespace trevor */
