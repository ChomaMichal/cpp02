#include "Fixed.hpp"

int	main(){
	Fixed i;

	std::cout << i.getRawBits() << std::endl;
	i.setRawBits(87);
	std::cout << i.getRawBits() << std::endl;
	Fixed j(i);
	std::cout << j.getRawBits() << std::endl;
	Fixed k;
	k = i;
	std::cout << k.getRawBits() << std::endl;
}
