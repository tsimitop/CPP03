#include "FragTrap.hpp"

// Default constructor
FragTrap::FragTrap() : ClapTrap("Default ClapTrap")
{
	std::cout << "FragTrap: Default constructor called.\n";
	this->_name = "Default FragTrap";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

// Parameterized constructor
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap: Parameterized constructor called.\n";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

// Copy constructor
FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap: Copy constructor called.\n";
}

// Copy assignment operator
FragTrap& FragTrap::operator=(const FragTrap& other)
{
	std::cout << "FragTrap: Copy assignment operator called.\n";
	if (this == &other)
		return (*this);
	ClapTrap::operator=(other);
	return (*this);
}

// Move constructor
FragTrap::FragTrap(FragTrap&& other) noexcept : ClapTrap(std::move(other))
{
	std::cout << "FragTrap: Move constructor called.\n";
}

// Move assignment operator
FragTrap& FragTrap::operator=(FragTrap&& other) noexcept
{
	std::cout << "FragTrap: Move assignment operator called.\n";
	if (this == &other)
		return (*this);
	ClapTrap::operator=(std::move(other));
	return (*this);
}

// Destructor
FragTrap::~FragTrap()
{
	std::cout << "FragTrap: Destructor called for " << this->_name << ".\n";
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap: High Five! You have managed to run the program and found your way throuh all of these classes!\n";
}

void	FragTrap::printStatus()
{
	std::cout << "FRAGTRAP STATUS\n";
	std::cout << "FragTrap name\t\t" << _name << std::endl;
	std::cout << "FragTrap hitpoints\t" << _hitPoints << std::endl;
	std::cout << "FragTrap energypoints\t" << _energyPoints << std::endl;
	std::cout << "FragTrap attackdamage\t" << _attackDamage << std::endl;
}
