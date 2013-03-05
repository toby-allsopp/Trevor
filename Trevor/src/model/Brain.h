/*
 * Brain.h
 *
 *  Created on: 7/02/2013
 *      Author: Toby
 */

#ifndef BRAIN_H_
#define BRAIN_H_

namespace trevor {

class Character;
class World;

class Brain {
public:
	Brain();
	virtual ~Brain() {
		// TODO Auto-generated destructor stub
	}

	virtual void takeTurn(World &world, Character &me) = 0;
};

} /* namespace trevor */
#endif /* BRAIN_H_ */
