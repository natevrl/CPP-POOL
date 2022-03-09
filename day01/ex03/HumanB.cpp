#include "HumanB.hpp"
#include "Weapon.hpp"


HumanB::HumanB(string name): _name(name)
{
	;
};

HumanB::~HumanB()
{
};

void HumanB::attack(void) const
{
	cout << this->_name << "attacks with their" << this->_weapon.getType() << endl;
};

void HumanB::setWeapon(Weapon weap)
{
	this->_weapon = weap;
}