#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <cstdio>
#include <iostream>
#include <iomanip>
 
class ClapTrap 
{
	public:
    // canonique form
		ClapTrap(void); // default constructor
		ClapTrap(std::string name); // string constructor
		~ClapTrap(void); // Destructor
		ClapTrap (ClapTrap const &src); // Constructor per Copy
		ClapTrap & operator=(ClapTrap const &rhs); // Operator Overload
    // getter & setter
        int getDamage(void) const;
        int getPdv(void) const;
        int getEnergy(void) const;
        std::string getName(void) const;
        void setDamage(int dmg);
        void setPdv(int pv);
        void setEnergy(int mana);

    // public functions
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

	private:
        std::string _name;
        int _pdv;
        int _energy;
        int _damage;

};

std::ostream & operator<<(std::ostream & o, ClapTrap const & rhs );

#endif // !ClapTrap_H