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
	void GetShortUserInfo(void);
	string UserList[8][5];
	void PrintUserList(int index);
	bool PrintCorrectIndex(void);


public:
	PhoneBook(void);
	void GetNewUser(void);
	void HandlerSearchCmd(void);
};

# endif 