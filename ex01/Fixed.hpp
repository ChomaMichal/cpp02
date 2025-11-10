#ifndef FIXED
#define FIXED

#include <iostream>

class Fixed{
	public:
		Fixed();
		Fixed(Fixed &org);
		Fixed(const int org);
		Fixed(const float org);
		void	operator=(Fixed &org);
		~Fixed();
		int		getRawBits(void);
		void	setRawBits(int const raw);
		float	toFloat(void);
		int		toInt(void);
	private:
		int					bits;
		static const int	fra = 8;
		
		
};

std::ostream& operator<<(std::ostream& os, const Fixed fx);

#endif

