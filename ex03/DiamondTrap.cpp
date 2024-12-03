#include "DiamondTrap.hpp"

// Default constructor
DiamondTrap::DiamondTrap()\
: ClapTrap("Default DiamondTrap_clap_name"), ScavTrap("Default ScavTrap"), FragTrap("Default FragTrap")
{
	ScavTrap temp;

	std::cout << "DiamondTrap: Default constructor called\n";
	this->_name = "Default DiamondTrap";
	this->_hitPoints = FragTrap::getHitPoints();
	this->_energyPoints = temp.getEnergyPoints();
	this->_attackDamage = FragTrap::getAttackDamage();
}

// Parameterized constructor
DiamondTrap::DiamondTrap(std::string name)\
: ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	ScavTrap temp;

	std::cout << "DiamondTrap: Parameterized constructor called\n";
	this->_name = name;
	this->_hitPoints = FragTrap::getHitPoints();
	this->_energyPoints = temp.getEnergyPoints();
	this->_attackDamage = FragTrap::getAttackDamage();
}

// Copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap& other)\
: ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	std::cout << "DiamondTrap: Copy constructor called\n";
	this->_name = other._name;
	this->_hitPoints = other.getHitPoints();
	this->_attackDamage = other.getAttackDamage();
	this->_energyPoints = other.getEnergyPoints();
	*this = other;
}

// Copy assignment operator
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	std::cout << "DiamondTrap: Copy assignment operator called\n";
	if (this == &other)
		return (*this);
	ClapTrap::operator=(other);
	this->_name = other._name;
	this->_hitPoints = other.getHitPoints();
	this->_attackDamage = other.getAttackDamage();
	this->_energyPoints = other.getEnergyPoints();
	return (*this);
}

// Move constructor
DiamondTrap::DiamondTrap(DiamondTrap&& other) noexcept\
: ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	std::cout << "DiamondTrap: Move constructor called\n";
	this->_name = std::move(other._name);
	this->_hitPoints = other.getHitPoints();
	this->_attackDamage = other.getAttackDamage();
	this->_energyPoints = other.getEnergyPoints();
	other.reset();
}

// Move assignment operator
DiamondTrap& DiamondTrap::operator=(DiamondTrap&& other) noexcept
{
	std::cout << "DiamondTrap: Move assignment operator called\n";
	if (this == &other)
		return (*this);
	ClapTrap::operator=(other);
	this->_name = std::move(other._name);
	this->_hitPoints = other.getHitPoints();
	this->_attackDamage = other.getAttackDamage();
	this->_energyPoints = other.getEnergyPoints();
	other.reset();
	return (*this);
}

// Destructor
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap: Destructor called for " << _name << ".\n";
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
	std::cout << "-----------------------WHOAMI OUTPUT---------------------\n";
	std::cout << "\n\tDiamondTrap _name is:\t";
	std::cout << this->_name << std::endl;

	std::cout << "\tClapTrap _name is:\t";
	std::cout << ClapTrap::getName() << std::endl << std::endl;

	std::cout << "---------------------------------------------------------\n";
}
