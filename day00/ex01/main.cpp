# include "./include/Contact.hpp"
# include "./include/PhoneBook.hpp"


int main(void)
{

	std::string stdin;
	PhoneBook repertoire;

	while (std::getline(std::cin, stdin) && stdin != "EXIT" & !std::cin.eof())
	{
		if (stdin == "ADD")
			repertoire.GetNewUser();
		else if (stdin == "SEARCH")
			repertoire.HandlerSearchCmd();
	}
	return (0);
}
