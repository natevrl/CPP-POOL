#include "Fixed.hpp"



Fixed::Fixed(void) : _fixed_float( 0 ) 
{ 
	std::cout << "Default constructor called" << std::endl;
	return ;
}; 


Fixed::~Fixed(void) // Desctuctor  
{ 
	std::cout << "Destructor called" << std::endl;
	return ; 
}; 

Fixed::Fixed(Fixed const &src) // Copy Constructor
{ 
	std::cout << "Copy constructor called" << std::endl;
	*this = src; 
	return ; 
}

Fixed & Fixed::operator=(Fixed const &rhs) // Operator Overload =
{
	std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &rhs) // this = pointeur (contient une adresse) & rhs = reference(contient une valeur)
		this->_fixed_float = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed_float;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_float = raw;
}