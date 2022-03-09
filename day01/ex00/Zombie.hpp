#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <string.h>
#include <cstdio>
#include <iostream>
#include <iomanip>

using namespace std;


class Zombie {
private:
	string name;

public:
	Zombie(string n);
	void Announce(void);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );


# endif