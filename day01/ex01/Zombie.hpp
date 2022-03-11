#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <string.h>
#include <cstdio>
#include <iostream>
#include <iomanip>




class Zombie {

private:
	std::string _name;

public:
	Zombie(void);
	void Announce(void) const;
	void setName(std::string newName);

};

Zombie* zombieHorde( int N, std::string name );

# endif