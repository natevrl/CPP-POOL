#include "FragTrap.hpp"

int main(void)
{
    FragTrap scav("BillyBob");
    ClapTrap test("Scappy");

    std::cout << std::endl;
    std::cout << "ClapTrap " << test.getName() << "'s life : " << test.getPdv() << std::endl;
    std::cout << "ClapTrap " << test.getName() << "'s attack damages : " << test.getDamage() << std::endl;

    std::cout << std::endl;
    // scav;
    scav.attack("test");
    std::cout << "ScavTrap " << scav.getName() << "'s life : " << scav.getPdv() << std::endl;
    std::cout << "ScavTrap " << scav.getName() << "'s energy : " << scav.getEnergy() << std::endl;
    std::cout << "ScavTrap " << scav.getName() << "'s attack damages : " << scav.getDamage() << std::endl;
    std::cout << std::endl << std::endl;

    scav.takeDamage(1);
    std::cout << "ScavTrap " << scav.getName() << "'s life : " << scav.getPdv() << std::endl;
    scav.beRepaired(42);
    std::cout << "ScavTrap " << scav.getName() << "'s life : " << scav.getPdv() << std::endl;
    std::cout << std::endl;

    return 0;
}

