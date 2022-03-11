#ifndef HUMANB_H
# define HUMANB_H

#include <string>
#include <string.h>
#include <cstdio>
#include <iostream>
#include <iomanip>

#include "Weapon.hpp"


class HumanB
{
private:
	std::string _name;
	Weapon *_weapon;
public:
	HumanB(std::string name);
	~HumanB();
	void attack(void) const;
	void setWeapon(Weapon &weap);
};


#endif