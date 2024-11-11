#include "ScavTrap.hpp"

// Default constructor
ScavTrap::ScavTrap() : ClapTrap("Default ClapTrap")
{
	std::cout << "ScavTrap: Default constructor called\n";
	this->_name = "Default ScavTrap";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

// Parameterized constructor
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap: Parameterized constructor called\n";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap: Copy constructor called\n";
}

// Copy assignment operator
ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "ScavTrap: Copy assignment operator called\n";
	if (this == &other)
		return (*this);
	ClapTrap::operator=(other);
	return (*this);
}

// Move constructor
ScavTrap::ScavTrap(ScavTrap&& other) noexcept : ClapTrap(std::move(other))
{
	std::cout << "ScavTrap: Move constructor called\n";
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
ScavTrap& ScavTrap::operator=(ScavTrap&& other) noexcept
{
	std::cout << "ScavTrap: Move assignment operator called\n";
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
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: Default destructor called for " << this->_name << ".\n";
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
		std::cout << "ScavTrap: Sorry, not enough energy or hit points to attack..." << std::endl;
	else
	{
		std::cout << "ScavTrap: " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints -= 1;
		std::cout << "ScavTrap: New total of energy points for " << this->_name << " is " << this->_energyPoints << std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap: " << this->_name << " in now in Gate Keeper mode.\n";
}

void	ScavTrap::printStatus()
{
	std::cout << "SCAVTRAP STATUS\n";
	std::cout << "ScavTrap name\t\t" << _name << std::endl;
	std::cout << "ScavTrap hitpoints\t" << _hitPoints << std::endl;
	std::cout << "ScavTrap energypoints\t" << _energyPoints << std::endl;
	std::cout << "ScavTrap attackdamage\t" << _attackDamage << std::endl;
}
