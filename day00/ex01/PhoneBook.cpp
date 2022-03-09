
# include "./include/Contact.hpp"
# include "./include/PhoneBook.hpp"

void PhoneBook::GetNewUser(void)
{
		
	Contact user;
	
	if (this->UserNumber > 7)
	{
		printf("TOO MUCH USER, 8 MAX\n");
		return ;
	}
	user.CreateContact();
	this->UserList[this->UserNumber][0] = user.ContactData[0];
	this->UserList[this->UserNumber][1] = user.ContactData[1];
	this->UserList[this->UserNumber][2] = user.ContactData[2];
	this->UserList[this->UserNumber][3] = user.ContactData[3];
	this->UserList[this->UserNumber][4] = user.ContactData[4];
	this->UserNumber++;
}

// SEARCH : affiche le contact demandé
// ◦ Affiche les contacts enregistrés sous la forme d’une liste de 4 colonnes : index,
// first name, last name et nickname.
// ◦ Chaque colonne doit faire 10 caractères de long. Elles doivent être séparées
// par un pipe (’|’). Leur texte est aligné à droite. Si le texte dépasse la largeur
// de la colonne, il faut le tronquer et remplacer le dernier caractère affiché par
// un point (’.’).
// ◦ Ensuite, le programme demande à l’utilisateur d’entrer l’index du contact à af-
// ficher. Si l’index ou son format sont incorrects, gérez cela de manière pertinente.
// Sinon, affichez les informations du contact, une par ligne.


void PhoneBook::PrintUserList(void)
{
	for(int y = 0; y < this->UserNumber; y++)
	{
		cout << setw(10) << y << "|";
		for (int i = 0; i < 3; i++)
			(this->UserList[y][i].size() > 10) ? cout << setw(10) << left << setfill('.') 
				<< this->UserList[y][i].substr(0, 9) << "|" : cout << setw(10) <<  this->UserList[y][i].substr(0, 10) << "|";
		cout << endl;
	}

}

// void PhoneBook::PrintUserList(Contact list[2])
// {
// 	for(int i = 0; list[i], i++)
// }

PhoneBook::PhoneBook()
{
	this->UserNumber = 0;
}
