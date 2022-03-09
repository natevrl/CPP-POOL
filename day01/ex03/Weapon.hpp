#ifndef WEAPON_H
# define WEAPON_H

#include <string>
#include <string.h>
#include <cstdio>
#include <iostream>
#include <iomanip>

using namespace std;

class Weapon
{
private:
	string _type;
public:
	Weapon(string weapon);
	~Weapon();
	void setType(string name);
	string const &getType(void);

};

#endif