/*
 * MonsterBrain.h
 *
 *  Created on: 5/03/2013
 *      Author: Toby
 */

#ifndef MONSTERBRAIN_H_
#define MONSTERBRAIN_H_

#include "Brain.h"

namespace trevor {

class MonsterBrain: public trevor::Brain {
public:
	MonsterBrain();
	virtual ~MonsterBrain() {
		// TODO Auto-generated destructor stub
	}

	void takeTurn(World &world, Character &me);

};

} /* namespace trevor */
#endif /* MONSTERBRAIN_H_ */
