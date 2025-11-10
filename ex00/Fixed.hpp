#ifndef FIXED
#define FIXED

#include <iostream>

class Fixed{
	public:
		Fixed();
		Fixed(Fixed &org);
		void	operator=(Fixed &org);
		~Fixed();
		int		getRawBits(void);
		void	setRawBits(int const raw);
	private:
		int					bits;
		static const int	fra = 8;
};
#endif

