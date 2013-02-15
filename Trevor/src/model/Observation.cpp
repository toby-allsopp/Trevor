/*
 * Observation.cpp
 *
 *  Created on: 20/01/2013
 *      Author: Toby
 */

#include "Observation.h"

namespace trevor {

Observation::Observation(const Position &position, std::shared_ptr<Observable> observable)
: m_position(position), m_observable(observable) {
	// TODO Auto-generated constructor stub

}

Observation::~Observation() {
	// TODO Auto-generated destructor stub
}

} /* namespace trevor */
