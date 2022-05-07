#include "Harl.hpp"

int main()
{
	Harl test;
	test.complain("");
	std::cout << std::endl;
	test.complain("debug");
	std::cout << std::endl;
	test.complain("info");
	std::cout << std::endl;
	test.complain("error");
	std::cout << std::endl;
	test.complain("wwwwwwwwwwwwwwwwwwwwww");
	return 0;
}
