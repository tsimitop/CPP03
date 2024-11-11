#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	frag1("FrogFrag");
	FragTrap	frag2("ToadFrag");

	std::cout << "\033[92m";
	std::cout << "-----PRESENTING FRAGTRAPPERS!-----\n";
	std::cout << frag1.getName() << " is frag1" << std::endl;
	std::cout << frag2.getName() << " is frag2" << std::endl;
	std::cout << "\033[34m";

	// std::cout << "---------PRINTING STATUS!--------\n"; //if ScavTrap
	// frag1.printStatus();
	// frag2.printStatus();

	std::cout << "\033[31m";
	frag1.highFivesGuys();
	std::cout << "----------FIGHT STARTS!----------\n";
	frag1.attack(frag2.getName());
	frag2.takeDamage(frag1.getAttackDamage());
	frag2.beRepaired(20);
	frag2.attack(frag1.getName());
	frag1.takeDamage(frag2.getAttackDamage());
	frag1.beRepaired(5);
	frag2.attack(frag1.getName());
	frag1.takeDamage(frag2.getAttackDamage());
	std::cout << "-----------FIGHT ENDS!-----------\n";
	std::cout << "\033[0m";
	return (0);
}
