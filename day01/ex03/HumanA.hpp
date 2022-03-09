#ifndef HUMANA_H
# define HUMANBA_H

#include <string>
#include <string.h>
#include <cstdio>
#include <iostream>
#include <iomanip>

#include "Weapon.hpp"

using namespace std;

class HumanA
{
private:
	string _name;
	Weapon& _weapon;
public:
	HumanA(string name, Weapon& weapon);
	~HumanA();
	void attack(void) const;
};



#endif