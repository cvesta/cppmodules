#include "Fixed.hpp"

const int Fixed::numberOfBits = 8;

Fixed::Fixed()
{
	setRawBits(0);
}

Fixed::~Fixed() {}

Fixed::Fixed(const int value)
{
	setRawBits(value * (1 << numberOfBits));
}

Fixed::Fixed(const float value)
{
	setRawBits(roundf(value * (1 << numberOfBits)));
}

Fixed::Fixed(const Fixed &copy)
{
	this->operator=(copy);
}

Fixed& Fixed::operator=(const Fixed &copy)
{
	fixedPointValue = copy.getRawBits();
	return (*this);
}

std::ostream& operator<< (std::ostream &out, const Fixed &copy)
{
	out << copy.toFloat();
	return out;
}

Fixed& Fixed::operator + (const Fixed &copy)
{
	this->fixedPointValue = (this->toFloat() + copy.toFloat()) * (1 <<
			numberOfBits);
	return *this;
}

Fixed& Fixed::operator - (const Fixed &copy)
{
	this->fixedPointValue = (this->toFloat() - copy.toFloat()) * (1 << numberOfBits);
	return *this;
}

Fixed& Fixed::operator * (const Fixed &copy)
{
	this->fixedPointValue = (this->toFloat() * copy.toFloat()) * (1 <<
			numberOfBits);
	return *this;
}

Fixed& Fixed::operator / (const Fixed &copy)
{
	this->fixedPointValue = (this->toFloat() / copy.toFloat()) * (1 <<
			numberOfBits);
	return *this;
}