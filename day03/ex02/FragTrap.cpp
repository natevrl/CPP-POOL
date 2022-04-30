#include "FragTrap.hpp"

// ------------- Init Canonique -----------

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap's default constructor called" << std::endl;
	this->_name = "default";
	this->_damage = 30;
	this->_energy = 100;
	this->_pdv = 100;
	return ;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap init (string constructor called)" << std::endl;
	this->_name = name;
	this->_damage = 30;
	this->_energy = 100;
	this->_pdv = 100;
	return ;
}

FragTrap::~FragTrap(void) // Destructor  
{ 
        std::cout << "FragTrap is done (default destructor called)" << std::endl;
        return ; 
}

FragTrap & FragTrap::operator=(FragTrap const &rhs) // Operator Overload =
{
        std::cout << "Copy assignment operator called" << std::endl;
        if ( this != &rhs) // this = pointeur (contient une adresse) & rhs = reference(contient une valeur)
                this->_name = rhs.getName();
        return *this;
}


std::ostream & operator<<(std::ostream & o, FragTrap const & rhs )
{
        o << rhs.getName();
        return o;
}

// ------------- Public Functions -----------
void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->getName() <<  " askinf for HighFives" << std::endl; 
}

// void FragTrap::attack(const std::string& target)
// {
// 	if (this->_energy <= 0)
// 	{
// 		std::cout << "FragTrap " << this->getName() <<  " haven't enough energy" << std::endl;
// 		return ;
// 	}
// 	std::cout << "FragTrap " << this->getName() <<  " shoot " << target 
// 	<< " causing " << this->getDamage() << " burst damages!" << std::endl;
// 	this->_energy -= 1;
// }
