#ifndef Harl_H
# define Harl_H

#include <string>
#include <cstdio>
#include <iostream>
#include <iomanip>

class Harl
{
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
public:
	Harl(/* args */);
	~Harl();
	void complain( std::string level );
};


#endif // !Harl_H