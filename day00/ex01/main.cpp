# include "./include/Contact.hpp"
# include "./include/PhoneBook.hpp"


int main(void)
{

	string stdin;
	PhoneBook repertoire;

	getline(cin, stdin);
	while (stdin != "EXIT")
	{
		if (stdin == "ADD")
			repertoire.GetNewUser();
		else if (stdin == "SEARCH")
			repertoire.PrintUserList();
		getline(cin, stdin);
	}
	return 0;
}
