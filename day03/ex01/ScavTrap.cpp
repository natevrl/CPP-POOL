#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap::ClapTrap(name)
{
        std::cout << name << " is alive" << std::endl;
		this->ClapTrap::_damage = 20;
		this->ClapTrap::_energy = 50;
		this->ClapTrap::_pdv = 100;
        return ;
}