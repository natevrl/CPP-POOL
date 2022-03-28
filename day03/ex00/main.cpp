#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap test("test");
    ClapTrap enemy("enemy");

    std::cout << "ClapTrap " << test.getName() << "'s life : " << test.getPdv() << std::endl;
    std::cout << "ClapTrap " << test.getName() << "'s energy : " << test.getEnergy() << std::endl;
    test.takeDamage(5);
    std::cout << "ClapTrap " << test.getName() << "'s energy : " << test.getEnergy() << std::endl;
    std::cout << "ClapTrap " << test.getName() << "'s life : " << test.getPdv() << std::endl;
    test.beRepaired(37);
    std::cout << "ClapTrap " << test.getName() << "'s energy : " << test.getEnergy() << std::endl;
    std::cout << "ClapTrap " << test.getName() << "'s life : " << test.getPdv() << std::endl;

    return 0;
}
