#include "Zombie.hpp"


void Zombie::Announce(void)
{
	cout << name + ": BraiiiiiiinnnzzzZ..." << endl;
}

Zombie::Zombie(string n): name(n) {
	
}