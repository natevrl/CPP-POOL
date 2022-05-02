#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <string>
#include <cstdio>
#include <iostream>
#include <iomanip>




class PhoneBook
{
private:
	int		_UserNumber;
	void	_GetShortUserInfo(void) const;
	std::string	_UserList[1024][5];
	void 	_Print_UserList(int index) const;
	bool 	_PrintCorrectIndex(void) const;


public:
	PhoneBook(void);
	void GetNewUser(void);
	void HandlerSearchCmd(void) const;
};

# endif 