#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap test("test");

    std::cout << "ClapTrap " << test.getName() << "'s life : " << test.getPdv() << std::endl;
    std::cout << "ClapTrap " << test.getName() << "'s energy : " << test.getEnergy() << std::endl << std::endl;;
    test.takeDamage(5);
    test.attack("enemy");
    test.attack("enemy");
    test.attack("enemy");
    test.attack("enemy");
    test.attack("enemy");
    test.attack("enemy");
    test.attack("enemy");
    test.attack("enemy");
    test.attack("enemy");
    test.attack("enemy");
    test.attack("enemy");
    test.attack("enemy");
    test.attack("enemy");
    std::cout << "ClapTrap " << test.getName() << "'s energy : " << test.getEnergy() << std::endl;
    std::cout << "ClapTrap " << test.getName() << "'s life : " << test.getPdv() << std::endl << std::endl;;
    test.beRepaired(42);
    std::cout << "ClapTrap " << test.getName() << "'s energy : " << test.getEnergy() << std::endl;
    std::cout << "ClapTrap " << test.getName() << "'s life : " << test.getPdv() << std::endl << std::endl;;
    test.takeDamage(5);
    test.takeDamage(5);

    return 0;
}
