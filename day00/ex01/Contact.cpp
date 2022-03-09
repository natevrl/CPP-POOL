# include "./include/Contact.hpp"
# include "./include/PhoneBook.hpp"

// Un contact possède les champs suivants : first name (prénom), last name
// (nom de famille), nickname (surnom), phone number (numéro de téléphone),
// et darkest secret (son plus lourd secret). Les champs d’un contact enregistré ne
// peuvent être vides.

void Contact::CreateContact(void)
{
	cout << "first name : ";
	cin >> this->ContactData[0];

	cout << "last name : ";
	cin >> this->ContactData[1];

	cout << "nickname : ";
	cin >> this->ContactData[2];

	cout << "darkest secret : ";
	cin >> this->ContactData[3];

	cout << "phone number : ";
	cin >> this->ContactData[4];
}