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
	void GetShortUserInfo(void) const;
	string UserList[8][5];
	void PrintUserList(int index) const;
	bool PrintCorrectIndex(void) const;


public:
	PhoneBook(void);
	void GetNewUser(void);
	void HandlerSearchCmd(void) const;
};

# endif 