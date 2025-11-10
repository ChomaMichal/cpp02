#include "Fixed.hpp"

int	main(){
	Fixed i(float(7.25));
	std::cout << i << std::endl;
	std::cout << i.toInt() << std::endl;
	Fixed j(25);
	std::cout << j << std::endl;
}
