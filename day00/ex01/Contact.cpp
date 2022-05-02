# include "./include/Contact.hpp"
# include "./include/PhoneBook.hpp"

// Un contact possède les champs suivants : first name (prénom), last name
// (nom de famille), nickname (surnom), phone number (numéro de téléphone),
// et darkest secret (son plus lourd secret). Les champs d’un contact enregistré ne
// peuvent être vides.

void Contact::CreateContact(void)
{
	if (!std::cin.eof()) { std::cout << "first name : "; }
	while (std::getline(std::cin, this->_contactData[0]) && this->_contactData[0] == "\0")
		std::cout << "Empty field detected, first name : ";
	if (!std::cin.eof()) { std::cout << "last name : "; }
	while (std::getline(std::cin, this->_contactData[1]) && this->_contactData[1] == "\0")
		std::cout << "Empty field detected, last name : ";
	if (!std::cin.eof()) { std::cout << "nickname : "; }
	while (std::getline(std::cin, this->_contactData[2]) && this->_contactData[2] == "\0")
		std::cout << "Empty field detected, nickname :  ";
	if (!std::cin.eof()) { std::cout << "darkest secret : "; }
	while (std::getline(std::cin, this->_contactData[3]) && this->_contactData[3] == "\0")
		std::cout << "Empty field detected, darkest secret : ";
	if (!std::cin.eof()) { std::cout << "phone number : "; }
	while (std::getline(std::cin, this->_contactData[4]) && this->_contactData[4] == "\0")
		std::cout << "Empty field detected, phone number : ";
}

std::string Contact::getContactData(int i) 
{
	return (this->_contactData[i]);
}
