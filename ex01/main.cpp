#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	scav1("ShifuSkav");
	ScavTrap	scav2("AtlasSkav");
	ClapTrap	clap1("ClapptonClap");
	ClapTrap	move1;

	move1 = std::move(clap1);
	std::cout << "\033[92m";
	std::cout << "-----PRESENTING CLAPTRAPPERS!-----\n";
	std::cout << scav1.getName() << " is scav1" << std::endl;
	std::cout << scav2.getName() << " is scav2" << std::endl;
	std::cout << clap1.getName() << " is clap1" << std::endl;
	std::cout << move1.getName() << " is clap1" << std::endl;
	std::cout << "\033[34m";

	std::cout << "------SETTING ATTACK DAMAGE!-----\n"; //if ClapTrap
	clap1.setAttackDamage(7);
	move1.setAttackDamage(7);

	// std::cout << "---------PRINTING STATUS!--------\n"; //if ScavTrap
	// scav1.printStatus();
	// scav2.printStatus();

	std::cout << "\033[31m";
	std::cout << "----------FIGHT STARTS!----------\n";
	scav2.guardGate();
	scav1.attack(scav2.getName());
	scav2.takeDamage(scav1.getAttackDamage());
	clap1.attack(scav2.getName());
	scav2.takeDamage(clap1.getAttackDamage());
	scav2.beRepaired(60);
	scav2.attack(scav1.getName());
	scav1.takeDamage(scav2.getAttackDamage());
	scav2.attack(clap1.getName());
	clap1.takeDamage(scav2.getAttackDamage());
	clap1.beRepaired(5);
	scav2.attack(clap1.getName());
	clap1.takeDamage(scav2.getAttackDamage());
	std::cout << "-----------FIGHT ENDS!-----------\n";

	std::cout << "----------FIGHT STARTS!----------\n";
	scav2.guardGate();
	scav1.attack(scav2.getName());
	scav2.takeDamage(scav1.getAttackDamage());
	move1.attack(scav2.getName());
	scav2.takeDamage(move1.getAttackDamage());
	scav2.beRepaired(60);
	scav2.attack(scav1.getName());
	scav1.takeDamage(scav2.getAttackDamage());
	scav2.attack(move1.getName());
	move1.takeDamage(scav2.getAttackDamage());
	move1.beRepaired(5);
	scav2.attack(move1.getName());
	move1.takeDamage(scav2.getAttackDamage());
	std::cout << "-----------FIGHT ENDS!-----------\n";

	std::cout << "\033[0m";
	return (0);
}
