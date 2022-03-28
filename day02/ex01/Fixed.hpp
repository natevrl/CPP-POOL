#ifndef FIXED_H
# define FIXED_H

#include <cstdio>
#include <iostream>
#include <iomanip>
#include <math.h>  
 
class Fixed 
{
	public:
		Fixed(void); // default constructor
		Fixed(const int x); // Int Constructor
		Fixed(const float x); // Float Constructor
		~Fixed(void); // Destructor
		Fixed (Fixed const &src); // Constructor per Copy
		Fixed & operator=(Fixed const &rhs); // Operator Overload

		 int getRawBits( void ) const;
		 void setRawBits( int const raw );
		 float toFloat( void ) const;
		 int toInt( void ) const;

	private:
		int _fixed_float;
		static const int _bits;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs );

#endif // !FIXED_H
