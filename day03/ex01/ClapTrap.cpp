#include "ClapTrap.hpp"

// ------------- Init Canonique -----------

ClapTrap::ClapTrap(void): _name("default"), _pdv(10), _energy(10), _damage(0)
{
	std::cout << "ClapTrap's default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name) //string constructor 
{ 
        std::cout << "ClapTrap init (string constructor called)" << std::endl;
		this->_damage = 0;
		this->_energy = 10;
		this->_pdv = 10;
        return ;
} 

ClapTrap::~ClapTrap(void) // Destructor  
{ 
        std::cout << "ClapTrap is done (default destructor called)" << std::endl;
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
	if (this->_pdv  <= 0)
	{
		std::cout << "ClapTrap " << this->getName() <<  " can't be attacked, he have no more points life" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->getName() <<  " has been attacked, losing : " 
	<< amount << " life points!" << std::endl;
	this->_pdv -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy <= 0)
	{
		std::cout << "ClapTrap " <<  this->getName() <<  " haven't enough energy" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " <<  this->getName() <<  " repairing " 
	<< amount << " life points" << std::endl;
	this->_pdv += amount;
	this->_energy -= 1;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_energy <= 0)
	{
		std::cout << "ClapTrap " << this->getName() <<  " haven't enough energy" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->getName() <<  " attacks " << target 
	<< " causing " << this->getDamage() << " points of damage!" << std::endl;
	this->_energy -= 1;
}

ClapTrap & ClapTrap::operator=(ClapTrap const &rhs) // Operator Overload =
{
        std::cout << "Copy assignment operator called" << std::endl;
        if ( this != &rhs) // this = pointeur (contient une adresse) & rhs = reference(contient une valeur)
                this->_name = rhs.getName();
        return *this;
}


std::ostream & operator<<(std::ostream & o, ClapTrap const & rhs )
{
        o << rhs.getName();
        return o;
}