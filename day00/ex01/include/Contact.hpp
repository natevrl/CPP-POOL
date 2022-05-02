#ifndef CONTACT_H
# define CONTACT_H

#include <string>
#include <cstdio>
#include <iostream>

class Contact
{

	public:		
		void	CreateContact(void);
		std::string getContactData(int i);
		
	private:
		std::string _contactData[5];

};

# endif 