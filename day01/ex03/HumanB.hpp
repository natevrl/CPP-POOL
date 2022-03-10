#ifndef HUMANB_H
# define HUMANB_H

#include <string>
#include <string.h>
#include <cstdio>
#include <iostream>
#include <iomanip>

#include "Weapon.hpp"
using namespace std;

class HumanB
{
private:
	string _name;
	Weapon *_weapon;
public:
	HumanB(string name);
	~HumanB();
	void attack(void) const;
	void setWeapon(Weapon &weap);
};


#endif