#ifndef FIXED_H
# define FIXED_H

#include <cstdio>
#include <iostream>
#include <iomanip>
 


class Fixed 
{
	public:
		Fixed(void); // default constructor
		~Fixed(void); // Destructor
		Fixed (Fixed const &src); // Constructor per Copy
		Fixed &operator=(Fixed const &rhs); // Operator Overload

		 int getRawBits( void ) const;
		 void setRawBits( int const raw );

	private:
		int _fixed_point;
		static const int _bits;
};

#endif // !FIXED_H
