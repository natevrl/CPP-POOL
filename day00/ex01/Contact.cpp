# include "./include/Contact.hpp"
# include "./include/PhoneBook.hpp"

// Un contact possède les champs suivants : first name (prénom), last name
// (nom de famille), nickname (surnom), phone number (numéro de téléphone),
// et darkest secret (son plus lourd secret). Les champs d’un contact enregistré ne
// peuvent être vides.

void Contact::CreateContact(void)
{
	cout << "first name : ";
	getline(cin, this->ContactData[0]);
	cout << "last name : ";
	getline(cin, this->ContactData[1]);
	cout << "nickname : ";
	getline(cin, this->ContactData[2]);
	cout << "darkest secret : ";
	getline(cin, this->ContactData[3]);
	cout << "phone number : ";
	getline(cin, this->ContactData[4]);
}