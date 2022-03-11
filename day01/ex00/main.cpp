#include "Zombie.hpp"

int main(void)
{
	Zombie main_zombie("main");
	Zombie* dynamic = newZombie("dynamic");


	std::cout << "basic creating object" << std::endl;
	main_zombie.Announce();

	std::cout << "creating object with dynamic allocation" << std::endl;
	dynamic->Announce();
	
	std::cout << "creating object with extern function" << std::endl;
	randomChump("random");

	delete dynamic;
	return 0;
}
