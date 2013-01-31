/*
 * Environment.h
 *
 *  Created on: 20/01/2013
 *      Author: Toby
 */

#ifndef ENVIRONMENT_H_
#define ENVIRONMENT_H_

#include "Observation.h"

#include <vector>

namespace trevor {

class Environment {
public:
	Environment();
	virtual ~Environment();

	typedef std::vector<Observation> Observations;
	Observations getObservations() const;
};

} /* namespace trevor */
#endif /* ENVIRONMENT_H_ */
