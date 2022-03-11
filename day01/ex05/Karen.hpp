#ifndef KAREN_H
# define KAREN_H

#include <string>
#include <cstdio>
#include <iostream>
#include <iomanip>

class Karen
{
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
public:
	Karen(/* args */);
	~Karen();
	void complain( std::string level );
};


#endif // !KAREN_H