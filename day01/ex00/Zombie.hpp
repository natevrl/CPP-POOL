#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <string.h>
#include <cstdio>
#include <iostream>
#include <iomanip>


class Zombie {
private:
	std::string name;

public:
	Zombie(std::string n);
	void Announce(void);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );


# endif