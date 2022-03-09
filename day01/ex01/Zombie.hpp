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
	string _name;

public:
	Zombie(void);
	void Announce(void) const;
	void setName(string newName);

};

Zombie* zombieHorde( int N, std::string name );

# endif