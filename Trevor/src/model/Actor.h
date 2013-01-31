/*
 * Actor.h
 *
 *  Created on: 20/01/2013
 *      Author: Toby
 */

#ifndef ACTOR_H_
#define ACTOR_H_

#include "Environment.h"

namespace trevor {

class Actor {
public:
	virtual ~Actor() {};
	virtual void act(const Environment &env) = 0;
};

}


#endif /* ACTOR_H_ */
