#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
		{
		private:
			int fixedPointValue;
			static const int numberOfBits;
		public:
			Fixed();
			~Fixed();
			Fixed(const Fixed &copy);
			Fixed(const int value);
			Fixed(const float value);
			Fixed& operator = (const Fixed &copy);

			bool operator == (const Fixed &copy) const;
			bool operator != (const Fixed &copy) const;
			bool operator > (const Fixed &copy) const;
			bool operator < (const Fixed &copy) const;
			bool operator <= (const Fixed &copy) const;
			bool operator >= (const Fixed &copy) const;

			Fixed& operator + (const Fixed &copy);
			Fixed& operator - (const Fixed &copy);
			Fixed& operator * (const Fixed &copy);
			Fixed& operator / (const Fixed &copy);

			Fixed& operator ++ ();
			Fixed& operator -- ();
			Fixed operator ++ (int);
			Fixed operator -- (int);

			static Fixed& max(Fixed &v1, Fixed &v2);
			static Fixed& min(Fixed &v1, Fixed &v2);
			static const Fixed& max(const fix &v1, &v2);
			static const Fixed& min(const fix &v1, &v2);

			int		getRawBits(void) const;
			void	setRawBits(int const raw);
			float	toFloat(void) const;
			int		toInt(void) const;
		};

std::ostream&	operator << (std::ostream &out, const Fixed &copy);

#endif