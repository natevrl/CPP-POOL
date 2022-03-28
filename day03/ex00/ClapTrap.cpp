#include "ClapTrap.hpp"

// ------------- Init Canonique -----------
ClapTrap::ClapTrap(std::string name) : _name(name)
{ 
        std::cout << name <<" is alive" << std::endl;
		this->_damage = 0;
		this->_energy = 10;
		this->_pdv = 10;
        return ;
} 

ClapTrap::~ClapTrap(void) // Destructor  
{ 
        std::cout << this->getName() <<" is done" << std::endl;
        return ; 
}

ClapTrap::ClapTrap(ClapTrap const &src) // Copy Constructor
{ 
        std::cout << "Copy constructor called" << std::endl;
        *this = src; 
        return ; 
}


// ------------- Getter & Setter -----------
int ClapTrap::getDamage(void) const
{
	return this->_damage;
}

int ClapTrap::getPdv(void) const
{
	return this->_pdv;
}

int ClapTrap::getEnergy(void) const
{
	return this->_energy;
}

std::string ClapTrap::getName(void) const
{
	return this->_name;
}

void ClapTrap::setDamage(int dmg)
{
	this->_damage = dmg;
}
void ClapTrap::setPdv(int pv)
{
	this->_pdv = pv;
}
void ClapTrap::setEnergy(int mana)
{
	this->_energy = mana;
}


// ------------- Public Functions -----------
void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->getName() <<  " has been attacked, losing : " 
	<< amount << " life points!" << std::endl;
	this->_pdv -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->getName() <<  " repairing " 
	<< amount << " life points" << std::endl;
	this->_pdv += amount;
	this->_energy -= 1;
}

void ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << this->getName() <<  " attacks " << target 
	<< " causing " << this->getDamage() << " points of damage!" << std::endl;
	this->_energy -= 1;
}

// ClapTrap & ClapTrap::operator=(ClapTrap const &rhs) // Operator Overload =
// {
//         std::cout << "Copy assignment operator called" << std::endl;
//         if ( this != &rhs) // this = pointeur (contient une adresse) & rhs = reference(contient une valeur)
//                 this->_ClapTrap_float = rhs.getRawBits();
//         return *this;
// }


// std::ostream & operator<<(std::ostream & o, ClapTrap const & rhs )
// {
//         o << rhs.getRawBits();
//         return o;
// }