/*
 * Observation.h
 *
 *  Created on: 20/01/2013
 *      Author: Toby
 */

#ifndef OBSERVATION_H_
#define OBSERVATION_H_

#include "Observable.h"
#include "Position.h"

#include <memory>

namespace trevor {

class Observation {
public:
	Observation(std::shared_ptr<Observable> observable);
	virtual ~Observation();

	Position m_position;
	std::shared_ptr<Observable> m_observable;
};

} /* namespace trevor */
#endif /* OBSERVATION_H_ */
