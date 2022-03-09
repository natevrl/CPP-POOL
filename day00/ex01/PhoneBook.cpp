
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
	for (int i = 0; i < 5; i++)
		this->UserList[this->UserNumber][i] = user.ContactData[i];
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


void PhoneBook::GetShortUserInfo(void)
{
	string tmp;
	for(int y = 0; y < this->UserNumber; y++)
	{
		cout << setw(10) << y << "|";
		for (int i = 0; i < 3; i++)
		{
			if (this->UserList[y][i].size() > 10)
			{
				tmp = this->UserList[y][i];
				tmp[9] = '.';
				cout << setw(10) << tmp.substr(0, 10) << "|";
			}
			else
 				cout << setw(10) <<  this->UserList[y][i].substr(0, 10) << "|";
		}
			cout << endl;
	}

}

void PhoneBook::PrintUserList(int index)
{
	for(int i = 0; i < 5; i++)
		cout << this->UserList[index][i] << endl;
}

bool PhoneBook::PrintCorrectIndex(void)
{
	int i;
	cout << "Choose a correct index to print : ";
	if (cin >> i && i < this->UserNumber)  
		return (this->PrintUserList(i), true);
	else
		return (cout << "\e[31m[Error] : \e[0m",  cin.clear(),  cin.ignore(1024, '\n'), false);
}

void PhoneBook::HandlerSearchCmd(void)
{
	if (this->UserNumber != 0)
	{
		this->GetShortUserInfo();
		while (!this->PrintCorrectIndex());
	}
	else
		cout << "You need to ADD one contact before" << endl;
}


PhoneBook::PhoneBook()
{
	this->UserNumber = 0;
}
