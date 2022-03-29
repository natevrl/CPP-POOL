#include "ScavTrap.hpp"

// ------------- Init Canonique -----------
ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap different initialization (string constructor called)" << std::endl;
	this->_name = name;
	this->_damage = 20;
	this->_energy = 50;
	this->_pdv = 100;
	return ;
}

ScavTrap::~ScavTrap(void) // Destructor  
{ 
        std::cout << "ScavTrap different destruction (default destructor called)" << std::endl;
        return ; 
}

ScavTrap & ScavTrap::operator=(ScavTrap const &rhs) // Operator Overload =
{
        std::cout << "Copy assignment operator called" << std::endl;
        if ( this != &rhs) // this = pointeur (contient une adresse) & rhs = reference(contient une valeur)
                this->_name = rhs.getName();
        return *this;
}


std::ostream & operator<<(std::ostream & o, ScavTrap const & rhs )
{
        o << rhs.getName();
        return o;
}

// ------------- Public Functions -----------
void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->getName() <<  " entered in GateKeeper mode" << std::endl; 
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_energy <= 0)
	{
		std::cout << "ScavTrap " << this->getName() <<  " haven't enough energy" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->getName() <<  " shoot " << target 
	<< " causing " << this->getDamage() << " burst damages!" << std::endl;
	this->_energy -= 1;
}
