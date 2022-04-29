#include "Karen.hpp"

int main()
{
	Karen test;
	test.complain("debug");
	std::cout << std::endl;
	test.complain("warning");
	std::cout << std::endl;
	test.complain("info");
	std::cout << std::endl;
	test.complain("error");
	std::cout << std::endl;
	test.complain("wwwwwwwwwwwwwwwwwwwwww");
	return 0;
}