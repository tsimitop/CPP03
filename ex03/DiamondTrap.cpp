#include "DiamondTrap.hpp"

// Default constructor
DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name"), ScavTrap("Default_clap_name"), FragTrap("Default_clap_name")
{
	std::cout << "DiamondTrap: Default constructor called\n";
	this->_name = "Default DiamondTrap";
	this->_hitPoints = ScavTrap::getHitPoints();
	this->_energyPoints = FragTrap::getEnergyPoints();
	this->_attackDamage = ScavTrap::getAttackDamage();
}

// Parameterized constructor
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap: Parameterized constructor called\n";
	this->_name = name;
	this->_hitPoints = ScavTrap::getHitPoints();
	this->_energyPoints = FragTrap::getEnergyPoints();
	this->_attackDamage = ScavTrap::getAttackDamage();
}

// Copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	std::cout << "DiamondTrap: Copy constructor called\n";
	this->_name = other.getName();
}

// Copy assignment operator
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	std::cout << "DiamondTrap: Copy assignment operator called\n";
	if (this == &other)
		return (*this);
	ClapTrap::operator=(other);
	return (*this);
}

// Move constructor
DiamondTrap::DiamondTrap(DiamondTrap&& other) noexcept : ClapTrap(std::move(other))
{
	std::cout << "DiamondTrap: Move constructor called\n";
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
DiamondTrap& DiamondTrap::operator=(DiamondTrap&& other) noexcept
{
	std::cout << "DiamondTrap: Move assignment operator called\n";
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
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap: Default destructor called for " << getName() << ".\n";
}

std::string	DiamondTrap::getDiamondName()
{
	return (this->_name);
}

void	DiamondTrap::printStatus()
{
	std::cout << "DIAMONDTRAP STATUS\n";
	std::cout << "DiamondTrap name\t\t" << _name << std::endl;
	std::cout << "DiamondTrap hitpoints\t\t" << _hitPoints << std::endl;
	std::cout << "DiamondTrap energypoints\t" << _energyPoints << std::endl;
	std::cout << "DiamondTrap attackdamage\t" << _attackDamage << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "-------------------WHOAMI OUTPUT-----------------\n";
	std::cout << "|DiamondTrap: _name is\t|" << this->_name << "\t\t|" << std::endl;
	std::cout << "|ClapTrap::getName() is\t|" << ClapTrap::getName() << "\t|" << std::endl;
	std::cout << "-------------------------------------------------\n";
}
