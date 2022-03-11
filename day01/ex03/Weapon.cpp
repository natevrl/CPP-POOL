#include "Weapon.hpp"


Weapon::Weapon(std::string weapon): _type(weapon)
{
	;
}

Weapon::~Weapon()
{
	;
}

std::string const &Weapon::getType(void)
{
	return(this->_type);
}

void Weapon::setType(std::string name)
{
	if (!name.empty())
		this->_type = name;
	else 
		std::cout << "Error empty std::string" << std::endl;
}