#include "Weapon.hpp"


Weapon::Weapon(string weapon): _type(weapon)
{
	;
}

Weapon::~Weapon()
{
	;
}

string const &Weapon::getType(void)
{
	return(this->_type);
}

void Weapon::setType(string name)
{
	if (!name.empty())
		this->_type = name;
	else 
		cout << "Error empty string" << endl;
}