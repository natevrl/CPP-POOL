#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed(void) : _fixed_point( 0 ) 
{ 
	// std::cout << "Default constructor called" << std::endl;
	return ;
} 

Fixed::Fixed(const int nb) 
{
	_fixed_point =  nb << _bits;
	// std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const float nb ) 
{
	_fixed_point = roundf(nb * (1 << _bits));
	// std::cout << "Float constructor called" << std::endl;
	return ;
}

float Fixed::toFloat( void ) const
{
	return ( (float)_fixed_point / (1 << _bits) );
}

int Fixed::toInt( void ) const
{
	return ( _fixed_point / (1 << _bits) );
}

Fixed::~Fixed(void) // Destructor  
{ 
	// std::cout << "Destructor called" << std::endl;
	return ; 
}

Fixed::Fixed(Fixed const &src) // Copy Constructor
{ 
	// std::cout << "Copy constructor called" << std::endl;
	*this = src; 
	return ; 
}


void Fixed::operator=(Fixed const &rhs) // Operator Overload =
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &rhs) // this = pointeur (contient une adresse) & rhs = reference(contient une valeur)
		this->_fixed_point = rhs.getRawBits();
	return;
}

bool Fixed::operator==(const Fixed &fix) const
{
	return (this->_fixed_point == fix.getRawBits());
}

bool Fixed::operator!=(const Fixed &fix) const
{
	return (this->_fixed_point != fix.getRawBits());
}

bool Fixed::operator<=(const Fixed &fix) const
{
	return (this->_fixed_point <= fix.getRawBits());
}

bool Fixed::operator>=(const Fixed &fix) const
{
	return (this->_fixed_point >= fix.getRawBits());
}

bool Fixed::operator>(const Fixed &fix) const
{
	return (this->_fixed_point > fix.getRawBits());
}

bool Fixed::operator<(const Fixed &fix) const
{
	return (this->_fixed_point < fix.getRawBits());
}


Fixed Fixed::operator+(const Fixed &fix)
{
	return (this->toFloat()+ fix.toFloat());
}

Fixed Fixed::operator-(const Fixed &fix)
{
	return (this->toFloat() - fix.toFloat());
}

Fixed Fixed::operator*(const Fixed &fix)
{
	return (this->toFloat() * fix.toFloat());
}

Fixed Fixed::operator/(const Fixed &fix)
{
	return (this->toFloat() / fix.toFloat());
}

Fixed Fixed::operator++(void)
{
	++this->_fixed_point;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;

	this->_fixed_point++;
	return (tmp);
}

Fixed Fixed::operator--(void)
{
	--this->_fixed_point;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;

	this->_fixed_point--;
	return (tmp);
}



const Fixed Fixed::min(Fixed &fix1, Fixed &fix2)
{
	if (fix1.getRawBits() < fix2.getRawBits())
		return fix1;
	return fix2;
}

const Fixed Fixed::max(Fixed const &fix1, Fixed const &fix2)
{
	if (fix1.getRawBits() > fix2.getRawBits())
		return fix1;
	return fix2;
}


int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed_point;
}

void Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_point = raw;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}