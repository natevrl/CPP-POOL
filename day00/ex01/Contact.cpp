# include "./include/Contact.hpp"
# include "./include/PhoneBook.hpp"

// Un contact possède les champs suivants : first name (prénom), last name
// (nom de famille), nickname (surnom), phone number (numéro de téléphone),
// et darkest secret (son plus lourd secret). Les champs d’un contact enregistré ne
// peuvent être vides.

void Contact::CreateContact(void)
{
	std::cout << "first name : ";
	std::getline(std::cin, this->ContactData[0]);
	std::cout << "last name : ";
	std::getline(std::cin, this->ContactData[1]);
	std::cout << "nickname : ";
	std::getline(std::cin, this->ContactData[2]);
	std::cout << "darkest secret : ";
	std::getline(std::cin, this->ContactData[3]);
	std::cout << "phone number : ";
	std::getline(std::cin, this->ContactData[4]);
}