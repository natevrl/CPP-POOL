#include "Zombie.hpp"

int main(void)
{
	Zombie main_zombie("main");
	Zombie* dynamic = newZombie("dynamic");


	cout << "basic creating object" << endl;
	main_zombie.Announce();

	cout << "creating object with dynamic allocation" << endl;
	dynamic->Announce();
	
	cout << "creating object with extern function" << endl;
	randomChump("random");

	delete dynamic;
	return 0;
}
