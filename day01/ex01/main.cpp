#include "Zombie.hpp"

int main(void)
{
	int HordeNumbers = 4;
	Zombie *horde = zombieHorde(HordeNumbers, "test");
	for(int i = 0; i < HordeNumbers; i++)
		horde[i].Announce();
	delete [] horde;
	return 0;
}
