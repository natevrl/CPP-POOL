#include "HumanB.hpp"
#include "Weapon.hpp"


HumanB::HumanB(std::string name): _name(name) 
{
	this->_weapon = NULL;
};

HumanB::~HumanB()
{
	;
};

void HumanB::attack(void) const
{
	if (!this->_weapon)
	{
		std::cout << this->_name <<" has no weap to attacks" << std::endl;
		return ;
	}
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
};

void HumanB::setWeapon(Weapon *weap)
{
	this->_weapon = weap;
}
