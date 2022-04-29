#include <string>
#include <cstdio>
#include <iostream>





int main( void )
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "str address : " << &str << std::endl << std::endl;
	std::cout << "PTR address : " << stringPTR << std::endl << std::endl;
	std::cout << "REFERENCE address : " << &stringREF << std::endl << std::endl;

	// stringREF = str2;
	std::cout << "str value : " << str << std::endl << std::endl;
	std::cout << "ptr value with dereferencement : " << *stringPTR << std::endl << std::endl;
	std::cout << "reference value : " << stringREF << std::endl;

	return 0;
}

