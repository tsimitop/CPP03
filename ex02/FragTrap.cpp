#include "FragTrap.hpp"

// Default constructor
FragTrap::FragTrap() : ClapTrap("Default ClapTrap")
{
	std::cout << "FragTrap: Default constructor called\n";
	this->_name = "Default FragTrap";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

// Parameterized constructor
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap: Parameterized constructor called\n";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

// Copy constructor
FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap: Copy constructor called\n";
}

// Copy assignment operator
FragTrap& FragTrap::operator=(const FragTrap& other)
{
	std::cout << "FragTrap: Copy assignment operator called\n";
	if (this == &other)
		return (*this);
	ClapTrap::operator=(other);
	return (*this);
}

// Move constructor
FragTrap::FragTrap(FragTrap&& other) noexcept : ClapTrap(std::move(other))
{
	std::cout << "FragTrap: Move constructor called\n";
	this->_name = std::move(other._name);
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;

	other._hitPoints = 0;
	other._energyPoints = 0;
	other._attackDamage = 0;
	other._name = "Moved";
}

// Move assignment operator
FragTrap& FragTrap::operator=(FragTrap&& other) noexcept
{
	std::cout << "FragTrap: Move assignment operator called\n";
	if (this == &other)
		return (*this);
	ClapTrap::operator=(std::move(other));

	this->_name = std::move(other._name);
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;

	other._hitPoints = 0;
	other._energyPoints = 0;
	other._attackDamage = 0;
	other._name = "Moved";

	return (*this);
}

// Default destructor
FragTrap::~FragTrap()
{
	std::cout << "FragTrap: Default destructor called for " << this->_name << ".\n";
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap: High Five! You have managed to run the program and found your way throuh all of these classes!\n";
}
