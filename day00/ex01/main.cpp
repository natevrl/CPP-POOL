# include "./include/Contact.hpp"
# include "./include/PhoneBook.hpp"


int main(void)
{

	std::string stdin;
	PhoneBook repertoire;

	std::getline(std::cin, stdin);
	while (stdin != "EXIT")
	{
		if (stdin == "ADD")
			repertoire.GetNewUser();
		else if (stdin == "SEARCH")
			repertoire.HandlerSearchCmd();
		else
			std::cout << "command : ADD || SEARCH || EXIT"<< std::endl;
		std::getline(std::cin, stdin);
	}
	return (0);
}
