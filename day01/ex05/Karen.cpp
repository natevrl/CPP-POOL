#include "Karen.hpp"
#include <map>

Karen::Karen(/* args */)
{
	;
};

Karen::~Karen()
{
	;
};

void Karen::complain( std::string level )
{
	void (Karen::*ComplainPtr[4])() = { &Karen::debug, &Karen::info, &Karen::warning, &Karen::error };
	string ComplainArray[4] = {"debut", "info", "warning", "error"}; 

	for (size_t i = 0; i < 4; i++)
		if (ComplainArray[i] == level)
			return ((this->*ComplainPtr[i])());
	
};

void Karen::debug( void )
{
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << endl;
};

void Karen::info( void )
{
	cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger ! If you did, I wouldn’t be asking for more !" << endl;
};

void Karen::warning( void )
{
	cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << endl;
};

void Karen::error( void )
{
	cout << "This is unacceptable ! I want to speak to the manager now." << endl;
};