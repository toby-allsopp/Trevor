/*
 * Observer.h
 *
 *  Created on: 22/01/2013
 *      Author: Toby
 */

#ifndef OBSERVER_H_
#define OBSERVER_H_

namespace trevor {

class Character;

class Observer {
public:
	virtual ~Observer() {
	}

	virtual void observeCharacter(Character &character) = 0;
	//virtual void observeContainer(const Container &container) = 0;
};

} /* namespace trevor */
#endif /* OBSERVER_H_ */
