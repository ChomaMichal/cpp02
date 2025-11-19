#ifndef FIXED
#define FIXED

#include <iostream>

class Fixed{
	public:
		Fixed();
		Fixed(Fixed &org);
		Fixed(const int org);
		Fixed(const float org);
		Fixed	&operator=(const Fixed &org);
		bool	operator<(Fixed &org);
		bool	operator<(const Fixed &org) const;
		bool	operator>(Fixed &org);
		bool	operator<=(Fixed &org);
		bool	operator>=(Fixed &org);
		bool	operator==(Fixed &org);
		bool	operator!=(Fixed &org);
		Fixed	operator*(Fixed &org);
		Fixed	operator-(Fixed &org);
		Fixed	operator+(Fixed &org);
		Fixed	operator/(Fixed &org);
		Fixed	operator++(int);
		Fixed&	operator++();
		Fixed	operator--(int);
		Fixed&	operator--();
		~Fixed();
		int		getRawBits(void);
		void	setRawBits(int const raw);
		float	toFloat(void);
		int		toInt(void);
		Fixed&	min(Fixed& n1, Fixed& n2);
		const Fixed&	min(const Fixed& n1, const Fixed& n2);
		Fixed&	max(Fixed& n1, Fixed& n2);
		const Fixed&	max(const Fixed& n1, const Fixed& n2);
	private:
		int					bits;
		static const int	fra = 8;
		
		
};

std::ostream& operator<<(std::ostream& os, const Fixed fx);

#endif

