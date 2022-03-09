#include "Zombie.hpp"


void Zombie::Announce(void) const
{
	cout << _name + ": BraiiiiiiinnnzzzZ..." << endl;
}

// Zombie::Zombie(string nom): name(nom) {
	
// }

Zombie::Zombie(void)
{
	;
}


void	Zombie::setName( string newName )
{
	this->_name = newName;
}
