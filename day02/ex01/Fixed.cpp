#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed(void) : _fixed_float( 0 ) 
{ 
	std::cout << "Default constructor called" << std::endl;
	return ;
} 

Fixed::Fixed(const int x) 
{
	std::cout << "Int constructor called" << std::endl;
	_fixed_float =  x << _bits;
	return ;
}

Fixed::Fixed( const float x ) 
{
	std::cout << "Float constructor called" << std::endl;
	_fixed_float = roundf(x * (1 << _bits));
	return ;
}

float Fixed::toFloat( void ) const
{
	return ( (float)_fixed_float / (1 << _bits) );
}

int Fixed::toInt( void ) const
{
	return ( _fixed_float / (1 << _bits) );
}

Fixed::~Fixed(void) // Destructor  
{ 
	std::cout << "Destructor called" << std::endl;
	return ; 
}

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
	// std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed_float;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_float = raw;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs )
{
	o << rhs.getRawBits();
	return o;
}