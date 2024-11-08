#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	trap1("Rra Trap");
	ClapTrap	trap2("Mma Trapper");

	// CONSTRUCTOR CHECKS
	// ClapTrap	trap3 = trap1;
	// ClapTrap	trap4("Failed trapoid");
	// ClapTrap	trap5 = trap4;
	// ClapTrap	trap6;
	// trap4 = trap2;

	std::cout << "\033[92m";
	std::cout << "-----PRESENTING CLAPTRAPPERS!-----\n";
	std::cout << trap1.getName() << " is trap1" << std::endl;
	std::cout << trap2.getName() << " is trap2" << std::endl;
	// std::cout << trap3.getName() << " is trap3" << std::endl;
	// std::cout << trap4.getName() << " is trap4" << std::endl;
	// std::cout << trap5.getName() << " is trap5" << std::endl;
	// std::cout << trap6.getName() << " is trap6" << std::endl;
	std::cout << "\033[34m";

	std::cout << "------SETTING ATTACK DAMAGE!-----\n";
	trap1.setAttackDamage(3);
	trap2.setAttackDamage(2);
	std::cout << "\033[31m";

	std::cout << "----------FIGHT STARTS!----------\n";
	trap1.attack(trap2.getName());
	trap2.takeDamage(trap1.getAttackDamage());
	trap1.attack(trap2.getName());
	trap2.takeDamage(trap1.getAttackDamage());
	trap1.attack(trap2.getName());
	trap2.takeDamage(trap1.getAttackDamage());
	trap1.attack(trap2.getName());
	trap2.takeDamage(trap1.getAttackDamage());
	trap2.beRepaired(5);
	trap1.attack(trap2.getName());
	trap2.takeDamage(trap1.getAttackDamage());
	trap1.attack(trap2.getName());
	trap2.takeDamage(trap1.getAttackDamage());
	trap1.attack(trap2.getName());
	trap2.takeDamage(trap1.getAttackDamage());
	trap1.attack(trap2.getName());
	trap2.takeDamage(trap1.getAttackDamage());
	trap1.attack(trap2.getName());
	trap2.takeDamage(trap1.getAttackDamage());
	trap1.attack(trap2.getName());
	trap2.takeDamage(trap1.getAttackDamage());
	trap1.attack(trap2.getName());
	trap2.takeDamage(trap1.getAttackDamage());
	std::cout << "-----------FIGHT ENDS!-----------\n";
	std::cout << "\033[0m";
	return (0);
}
