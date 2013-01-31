/*
 * CharacterInfo.h
 *
 *  Created on: 10/01/2013
 *      Author: Toby
 */

#ifndef CHARACTERINFO_H_
#define CHARACTERINFO_H_

namespace trevor {

class CharacterInfo {
public:
	CharacterInfo();
	virtual ~CharacterInfo();

	int getHP() const {
		return m_hp;
	}

	void setHP(int hp) {
		m_hp = hp;
	}

	int getLevel() const {
		return m_level;
	}

	void setLevel(int level) {
		m_level = level;
	}

	int getXP() const {
		return m_xp;
	}

	void setXP(int xp) {
		m_xp = xp;
	}

private:
	int m_level;
	int m_xp;
	int m_hp;
};

} /* namespace trevor */
#endif /* CHARACTERINFO_H_ */
