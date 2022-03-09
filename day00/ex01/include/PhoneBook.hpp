#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <string>
#include <string.h>
#include <cstdio>
#include <iostream>
#include <iomanip>

using namespace std;

class PhoneBook
{
private:
	int UserNumber;
	string FillOneColumn(string str);

public:
	PhoneBook(void);
	// ~PhoneBook();
	string UserList[8][5];
	void GetNewUser(void);
	void PrintUserList(void);
	// void PrintUserList(Contact list[2]);
};

# endif 