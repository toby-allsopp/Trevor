/*
 * Observable.h
 *
 *  Created on: 22/01/2013
 *      Author: Toby
 */

#ifndef OBSERVABLE_H_
#define OBSERVABLE_H_

#include "Observer.h"

namespace trevor {

class Observable {
public:
	virtual ~Observable() {
	}
	;

	virtual void observe(const Observer &observer) = 0;
};

} /* namespace trevor */
#endif /* OBSERVABLE_H_ */
