#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	diamond1("DiamondSharp");
	DiamondTrap	diamond2("DiamondFake");
	DiamondTrap	diamond3("DiamondThree");
	DiamondTrap copy = diamond1;
	DiamondTrap copyAssignment;
	copyAssignment = diamond1;
	DiamondTrap move = std::move(diamond2);
	DiamondTrap moveAssignment;
	moveAssignment = std::move(diamond3);

	std::cout << "\033[92m";
	std::cout << "-----PRESENTING DIAMONDTRAPPERS!-----\n";
	std::cout << diamond1.getDiamondName() << " is diamond1\n";
	std::cout << diamond2.getDiamondName() << " is diamond2\n";
	std::cout << diamond3.getDiamondName() << " is diamond3\n";
	std::cout << copy.getDiamondName() << " is copy\n";
	std::cout << copyAssignment.getDiamondName() << " is copyAssignment\n";
	std::cout << move.getDiamondName() << " is move\n";
	std::cout << moveAssignment.getDiamondName() << " is moveAssignment\n";
	std::cout << "\033[34m";

	std::cout << "---------PRINTING STATUS!--------\n"; //if ScavTrap
	diamond1.printStatus();
	diamond2.printStatus();

	std::cout << "\033[35m";
	diamond1.whoAmI();
	diamond2.whoAmI();

	std::cout << "\033[31m";
	std::cout << "----------FIGHT STARTS!----------\n";
	diamond1.attack(diamond2.getName());
	diamond2.takeDamage(diamond1.getAttackDamage());
	diamond2.beRepaired(20);
	diamond2.attack(diamond1.getName());
	diamond1.takeDamage(diamond2.getAttackDamage());
	diamond1.beRepaired(5);
	diamond2.attack(diamond1.getName());
	diamond1.takeDamage(diamond2.getAttackDamage());
	std::cout << "-----------FIGHT ENDS!-----------\n";
	std::cout << "\033[0m";
	return (0);
}
