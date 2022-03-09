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
	int		_UserNumber;
	void	_GetShortUserInfo(void) const;
	string	_UserList[8][5];
	void 	_Print_UserList(int index) const;
	bool 	_PrintCorrectIndex(void) const;


public:
	PhoneBook(void);
	void GetNewUser(void);
	void HandlerSearchCmd(void) const;
};

# endif 