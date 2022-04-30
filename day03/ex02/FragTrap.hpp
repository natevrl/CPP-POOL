#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class ClapTrap;

class FragTrap : public ClapTrap
{
public:
    FragTrap(std::string name);               // string constructor
    FragTrap(void);                           // default constructor
    ~FragTrap(void);                          // Destructor
    FragTrap(FragTrap const &src);            // Constructor per Copy
    FragTrap &operator=(FragTrap const &rhs); // Operator Overload
    void highFivesGuys(void);
	// void attack(const std::string &target);

private:
};

std::ostream &operator<<(std::ostream &o, FragTrap const &rhs);

#endif // FRAGTRAP_H
