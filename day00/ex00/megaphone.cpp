#include <iostream>

void	printUpper(char *str)
{
	int i = -1;
	while (str[++i])
	{
		(str[i] >= 'a' && str[i] <= 'z') ? str[i] -= 32 : str[i];
		std::cout << str[i];
	}
}

int main(int ac, char **av)
{
	if (ac == 1)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"  << std::endl, 0);
	else
		for (int i = 1; av[i]; i++)
			printUpper(av[i]);
	return (std::cout << std::endl, 0);
}