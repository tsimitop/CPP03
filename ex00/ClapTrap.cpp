#include "ClapTrap.hpp"

// Default constructor
// ClapTrap::ClapTrap(std::string name)
// {
// 	std::cout << "Default constructor called." << std::endl;
// 	this->_name = name;
// 	this->_hitPoints = 10;
// 	this->_energyPoints = 10;
// 	this->_attackDamage = 0;
// }

// Parameterized constructor
ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Parameterized constructor called." << std::endl;
}

// Default destructor
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called." << std::endl;
}

// ClapTrap::~ClapTrap() = default;

// Copy constructor
// ClapTrap::ClapTrap(const ClapTrap& other)
// {
// 	std::cout << "Copy constructor called." << std::endl;
// 	this->setAttackDamage(other._attackDamage);
// 	this->setEnergyPoints(other._energyPoints);
// 	this->setHitPoints(other._hitPoints);
// 	this->setName(other._name);
// }

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap& other) : _name(other._name), _hitPoints(other._hitPoints), _energyPoints(other._energyPoints), _attackDamage(other._attackDamage)
{
    std::cout << "Copy constructor called." << std::endl;
}

// Copy assignment operator
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "Copy assignment operator called." << std::endl;
	if (this == &other)
		return (*this);
    _name = other._name;
    _hitPoints = other._hitPoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
	// this->setAttackDamage(other._attackDamage);
	// this->setEnergyPoints(other._energyPoints);
	// this->setHitPoints(other._hitPoints);
	// this->setName(other._name);
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->getHitPoints() <= 0)
		std::cout << "Sorry, not enough energy points to attack..." << std::endl;
	else
	{
		// this->_attackDamage = nbr;
		std::cout << this->_name << " attacks " << target << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (static_cast<int>(amount) - this->_attackDamage < 0)
		this->setAttackDamage(0);
	else
		this->setAttackDamage(this->_attackDamage - amount);
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0)
	{
		this->setHitPoints(this->_hitPoints + amount);
		std::cout << "Reparing " << this->_name << std::endl;
		this->setEnergyPoints(this->_energyPoints - 1);
	}
}

void	ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void	ClapTrap::setHitPoints(unsigned int nbr)
{
	// if (this->getHitPoints() <= 0)
	// 	std::cout << "Sorry, not enough energy points..." << std::endl;
	// else
	// {
	// 	this->_hitPoints = nbr;
	this->setHitPoints(nbr);
		std::cout << "Hit points of " << this->_name << " set to " << this->getHitPoints() << std::endl;
	// 	this->setEnergyPoints(this->getEnergyPoints() - 1);
	// }
}

void	ClapTrap::setEnergyPoints(unsigned int nbr)
{
	this->_energyPoints = nbr;	
	std::cout << "Energy points of " << this->_name << " set to " << this->getEnergyPoints() << std::endl;
}

void	ClapTrap::setAttackDamage(unsigned int nbr)
{
	// if (this->getHitPoints() <= 0)
	// 	std::cout << "Sorry, not enough energy points..." << std::endl;
	// else
	// {
	// 	this->_attackDamage = nbr;
	this->setAttackDamage(nbr);
	std::cout << "Attack damage of " << this->_name << " set to " << this->getAttackDamage() << std::endl;
	// 	this->setEnergyPoints(this->getEnergyPoints() - 1);
	// }
}

int		ClapTrap::getHitPoints()
{
	return (this->_hitPoints);
}

int		ClapTrap::getEnergyPoints()
{
	return (this->_energyPoints);
}

int		ClapTrap::getAttackDamage()
{
	return (this->_attackDamage);
}

std::string	ClapTrap::getName()
{
	return (this->_name);
}
