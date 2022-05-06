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
		Fixed(const int nb); // Int Constructor
		Fixed(const float nb); // Float Constructor
		~Fixed(void); // Destructor
		Fixed (Fixed const &src); // Constructor per Copy
		void operator=(Fixed const &rhs); // copy overload =
		bool operator==(const Fixed &fix) const;
		bool operator<=(const Fixed &fix) const;
		bool operator>=(const Fixed &fix) const;
		bool operator!=(const Fixed &fix) const;
		bool operator<(const Fixed &fix) const;
		bool operator>(const Fixed &fix) const;

		Fixed operator+(const Fixed &fix);
		Fixed operator-(const Fixed &fix);
		Fixed operator*(const Fixed &fix);
		Fixed operator/(const Fixed &fix);

		Fixed operator++(void);
		Fixed operator++(int);
		Fixed operator--(void);
		Fixed operator--(int);


		static const Fixed min(Fixed &fix1, Fixed &fix2);
		static const Fixed max(Fixed const &fix1, Fixed const &fix2);


		 int getRawBits( void ) const;
		 void setRawBits( int const raw );
		 float toFloat( void ) const;
		 int toInt( void ) const;

	private:
		int _fixed_point;
		static const int _bits;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs );

#endif // !FIXED_H
