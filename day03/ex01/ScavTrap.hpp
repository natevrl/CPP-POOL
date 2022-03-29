#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ClapTrap;

class ScavTrap : public ClapTrap 
{
    public:
        ScavTrap(std::string name); // default constructor
        // ~ScavTrap(void); // Destructor
        ScavTrap (ScavTrap const &src); // Constructor per Copy
        ScavTrap & operator=(ScavTrap const &rhs); // Operator Overload

         private:
            std::string _name;
            int _pdv;
            int _energy;
            int _damage;
};

#endif // SCAVTRAP_H
