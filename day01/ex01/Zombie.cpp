#include "Zombie.hpp"


void Zombie::Announce(void) const
{
	std::cout << _name + ": BraiiiiiiinnnzzzZ..." << std::std::endl;
}

// Zombie::Zombie(std::string nom): name(nom) {
	
// }

Zombie::Zombie(void)
{
	;
}


void	Zombie::setName( std::string newName )
{
	this->_name = newName;
}
