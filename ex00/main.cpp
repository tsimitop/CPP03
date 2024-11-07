#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	trap1("Mista Trap");
	ClapTrap	trap2("Mma Trapper");
	ClapTrap	trap3 = trap1;
	ClapTrap	trap4("Failed trapoid");
	ClapTrap	trap5 = trap4;
	trap4 = trap2;
	std::cout << "\033[92m";
	std::cout << trap1.getName() << " is number 1" << std::endl;
	std::cout << trap2.getName() << " is number 2" << std::endl;
	std::cout << trap3.getName() << " is number 3" << std::endl;
	std::cout << trap4.getName() << " is number 4" << std::endl;
	std::cout << trap5.getName() << " is number 5" << "\033[0m" << std::endl;

	return (0);
}
