#include "Zombie.hpp"


void Zombie::Announce(void)
{
	std::cout << _name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string n): _name(n) {
	;
}

Zombie::~Zombie(void)
{
	std::cout << _name + " is died" << std::endl;
}