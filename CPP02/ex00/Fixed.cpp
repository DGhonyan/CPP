#include "Fixed.hpp"

Fixed::Fixed() : fixed(0) { std::cout << "Default constructor called!\n"; }

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called!\n";
	fixed = other.getRawBits();
}

Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called!\n";
	fixed = other.getRawBits();
	return *this;
}

Fixed::~Fixed() { std::cout << "Destructor called!\n"; }

void Fixed::setRawBits(int const raw)
{
	fixed = raw;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called!\n";
	return fixed;
}
