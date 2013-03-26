/*
 * utils.h
 *
 *  Created on: 26/03/2013
 *      Author: Toby
 */

#ifndef UTILS_H_
#define UTILS_H_

template<typename T, typename... Args>
inline std::unique_ptr<T> make_unique(Args... args) {
	return std::unique_ptr<T>(new T(args...));
}

#endif /* UTILS_H_ */
