#include "Fixed.hpp"

Fixed::Fixed(){
	this->bits = 0;
}

Fixed::~Fixed(){

}

Fixed::Fixed(Fixed &org){
	this->bits = org.getRawBits();
}

void	Fixed::operator=(Fixed &org){
	this->bits = org.bits;
}

int		Fixed::getRawBits(void){
	return (this->bits);
}

void	Fixed::setRawBits(int const raw){
	this->bits = raw;
}
