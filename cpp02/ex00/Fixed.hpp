#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
		{
		private:
			int fixedPointValue;
			static const int numberOfBits;
		public:
			Fixed();
			~Fixed();
			Fixed(const Fixed &fixed);
			Fixed& operator = (const Fixed &fixed);

			int		getRawBits(void) const;
			void	setRawBits(int const raw);
		};

#endif