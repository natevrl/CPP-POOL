#include "Zombie.hpp"


void Zombie::Announce(void)
{
	std::cout << name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string n): name(n) {
	
}