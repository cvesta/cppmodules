#include "Fixed.hpp"

const int Fixed::numberOfBits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	setRawBits(0);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->operator=(copy);
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(value * (1 << numberOfBits));
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(value * (1 << numberOfBits)));
}

Fixed& Fixed::operator=(const Fixed &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	fixedPointValue = copy.getRawBits();
	return (*this);
}

std::ostream& operator<< (std::ostream &out, const Fixed &copy)
{
	out << copy.toFloat();
	return out;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return fixedPointValue;
}

void Fixed::setRawBits(const int raw)
{
	fixedPointValue = raw;
}

float Fixed::toFloat() const
{
	return (float(getRawBits()) / float (1 << numberOfBits));
}

int Fixed::toInt() const
{
	return (getRawBits() / (1 << numberOfBits));
}