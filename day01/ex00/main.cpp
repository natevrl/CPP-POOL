#include "Zombie.hpp"

int main(void)
{
	Zombie main_zombie("main");
	Zombie *dynamic = newZombie("dynamic");


	std::cout << "basic creating object---" << std::endl;
	main_zombie.Announce();
	std::cout << std::endl;


	std::cout << "creating object with dynamic allocation---" << std::endl;
	dynamic->Announce();
	std::cout << std::endl;
	delete dynamic;
	
	std::cout << "creating object with extern function---" << std::endl;
	randomChump("random");
	std::cout << std::endl;

	return 0;
}
