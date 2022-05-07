#include "Zombie.hpp"


void Zombie::Announce(void) const
{
	std::cout << _name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}


Zombie::Zombie(void)
{
	;
}

void	Zombie::setName( std::string newName )
{
	this->_name = newName;
}

std::string Zombie::getName(void)
{
	return (this->_name);
}

