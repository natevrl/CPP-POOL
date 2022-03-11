#ifndef WEAPON_H
# define WEAPON_H

#include <string>
#include <string.h>
#include <cstdio>
#include <iostream>
#include <iomanip>



class Weapon
{
private:
	std::string _type;
public:
	Weapon(std::string weapon);
	~Weapon();
	void setType(std::string name);
	std::string const &getType(void);

};

#endif