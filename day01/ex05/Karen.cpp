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
	std::string ComplainArray[4] = {"debut", "info", "warning", "error"}; 

	for (size_t i = 0; i < 4; i++)
		if (ComplainArray[i] == level)
			return ((this->*ComplainPtr[i])());
	
};

void Karen::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
};

void Karen::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
};

void Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
};

void Karen::error( void )
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
};