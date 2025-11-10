#include "Fixed.hpp"

Fixed::Fixed(){
	this->bits = 0;
}

Fixed::~Fixed(){

}

Fixed::Fixed(Fixed &org){
	this->bits = org.getRawBits();
}

Fixed::Fixed(const int org){
	this->bits = org << this->fra;
}

Fixed::Fixed(const float org){
	this->bits = static_cast<int>(org * (1 << this->fra));
}

void	Fixed::operator=(Fixed &org){
	this->bits = org.bits;
}

bool	Fixed::operator<(const Fixed &org)const{
	return (this->bits < org.bits);
}

bool	Fixed::operator<(Fixed &org){
	return (this->bits < org.bits);
}

bool	Fixed::operator>(Fixed &org){
	return (this->bits > org.bits);
}

bool	Fixed::operator>=(Fixed &org){
	return !(this->bits < org.bits);
}

bool	Fixed::operator<=(Fixed &org){
	return !(this->bits > org.bits);
}

bool	Fixed::operator==(Fixed &org){
	return (this->bits == org.bits);
}

bool	Fixed::operator!=(Fixed &org){
	return !(this->bits == org.bits);
}

Fixed	Fixed::operator+(Fixed &org){
	Fixed	rt;

	rt.setRawBits(org.getRawBits() + this->getRawBits());
	return (rt);
}

Fixed	Fixed::operator-(Fixed &org){
	Fixed	rt;

	rt.setRawBits(org.getRawBits() - this->getRawBits());
	return (rt);
}

Fixed	Fixed::operator*(Fixed &org){
	Fixed	rt;

	rt.setRawBits((org.getRawBits() * this->getRawBits()) >> this->fra);
	return (rt);
}

Fixed	Fixed::operator/(Fixed &org){
	Fixed	rt;

	rt.setRawBits((org.getRawBits() / this->getRawBits()) << this->fra);
	return (rt);
}

Fixed&	Fixed::operator++(){
	this->bits ++;
	return (*this);
}

Fixed	Fixed::operator++(int){
	Fixed	rt(*this);

	this->bits ++;
	return (rt);
}


Fixed&	Fixed::operator--(){
	this->bits --;
	return (*this);
}

Fixed	Fixed::operator--(int){
	Fixed	rt(*this);

	this->bits --;
	return (rt);
}

int		Fixed::getRawBits(void){
	return (this->bits);
}

void	Fixed::setRawBits(int const raw){
	this->bits = raw;
}

int		Fixed::toInt(void){
	return (this->bits >> this->fra);
}

float	Fixed::toFloat(void){
	return (float(this->bits) / float(1 << this->fra));
}

Fixed&	Fixed::min(Fixed& n1, Fixed& n2){
	if(n1 < n2)
		return (n1);
	return (n2);
}

const Fixed&	Fixed::min(const Fixed& n1,const Fixed& n2){
	if(n1 < n2)
		return (n1);
	return (n2);
}

Fixed&	Fixed::max(Fixed& n1, Fixed& n2){
	if(!(n1 < n2))
	 	return (n1);
	return (n2);
}

const Fixed&	Fixed::max(const Fixed& n1,const Fixed& n2){
	if(!(n1 < n2))
		return (n1);
	return (n2);
}

std::ostream& operator<<(std::ostream&os, Fixed fx)
{
	return (os << fx.toFloat());
}
