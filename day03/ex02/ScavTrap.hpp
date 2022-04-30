#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ClapTrap;

class ScavTrap : public ClapTrap
{
public:
    ScavTrap(std::string name);               // string constructor
    ScavTrap(void);                           // default constructor
    ~ScavTrap(void);                          // Destructor
    ScavTrap(ScavTrap const &src);            // Constructor per Copy
    ScavTrap &operator=(ScavTrap const &rhs); // Operator Overload
    void guardGate();
	void attack(const std::string &target);

private:
};

std::ostream &operator<<(std::ostream &o, ScavTrap const &rhs);

#endif // SCAVTRAP_H
