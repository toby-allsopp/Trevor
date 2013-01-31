/*
 * Character.h
 *
 *  Created on: 22/01/2013
 *      Author: Toby
 */

#ifndef CHARACTER_H_
#define CHARACTER_H_

#include "Observable.h"

namespace trevor {

class Character : public Observable {
public:
	Character();
	virtual ~Character() {
		// TODO Auto-generated destructor stub
	}
};

} /* namespace trevor */
#endif /* CHARACTER_H_ */
