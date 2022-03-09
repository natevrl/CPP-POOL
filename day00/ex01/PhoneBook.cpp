
# include "./include/Contact.hpp"
# include "./include/PhoneBook.hpp"

void PhoneBook::GetNewUser(void)
{
		
	Contact user;
	
	if (this->_UserNumber > 7)
	{
		printf("TOO MUCH USER, 8 MAX\n");
		return ;
	}
	user.CreateContact();
	for (int i = 0; i < 5; i++)
		this->_UserList[this->_UserNumber][i] = user.ContactData[i];
	this->_UserNumber++;
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


void PhoneBook::_GetShortUserInfo(void) const
{
	string tmp;
	for(int y = 0; y < this->_UserNumber; y++)
	{
		cout << setw(10) << y << "|";
		for (int i = 0; i < 3; i++)
		{
			if (this->_UserList[y][i].size() > 10)
			{
				tmp = this->_UserList[y][i];
				tmp[9] = '.';
				cout << setw(10) << tmp.substr(0, 10) << "|";
			}
			else
 				cout << setw(10) <<  this->_UserList[y][i].substr(0, 10) << "|";
		}
			cout << endl;
	}

}

void PhoneBook::_Print_UserList(int index) const
{
	for(int i = 0; i < 5; i++)
		cout << this->_UserList[index][i] << endl;
}

bool PhoneBook::_PrintCorrectIndex(void) const
{
	int i;
	cout << "Choose a correct index to print : ";
	if (cin >> i && i < this->_UserNumber)  
		return (this->_Print_UserList(i), true);
	else
		return (cout << "\e[31m[Error] : \e[0m",  cin.clear(),  cin.ignore(1024, '\n'), false);
}

void PhoneBook::HandlerSearchCmd(void) const
{
	if (this->_UserNumber != 0)
	{
		this->_GetShortUserInfo();
		while (!this->_PrintCorrectIndex());
	}
	else
		cout << "You need to ADD one contact before" << endl;
}


PhoneBook::PhoneBook()
{
	this->_UserNumber = 0;
}
