#include "ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap() : _name("Default ClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap: Default constructor called." << std::endl;
}

// Parameterized constructor
ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap: Parameterized constructor called." << std::endl;
}

// Default destructor
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap: Destructor called for " << this->_name << "." << std::endl;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap& other) : _name(other._name), _hitPoints(other._hitPoints), _energyPoints(other._energyPoints), _attackDamage(other._attackDamage)
{
    std::cout << "ClapTrap: Copy constructor called." << std::endl;
}

// Copy assignment operator
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "ClapTrap: Copy assignment operator called." << std::endl;
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

// Move constructor
ClapTrap::ClapTrap(ClapTrap&& other) noexcept : _name(other._name), _hitPoints(other._hitPoints), _energyPoints(other._energyPoints), _attackDamage(other._attackDamage)
{
	std::cout << "ClapTrap: Move constructor called\n";
	other._attackDamage = 0;
	other._hitPoints = 0;
	other._energyPoints = 0;
	other._name = "Moved";
}

// Move assignment constructor
ClapTrap& ClapTrap::operator=(ClapTrap&& other) noexcept
{
	std::cout << "ClapTrap: Move assignment operator called\n";
	if (this == &other)
		return (*this);
	_attackDamage = other._attackDamage;
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;

	other._attackDamage = 0;
	other._hitPoints = 0;
	other._energyPoints = 0;
	other._name = "Moved";

	return (*this);
}

// ACTIONS (ATTACK, DAMAGE, REPAIR)
void	ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
		std::cout << "Sorry, not enough energy or hit points to attack..." << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints -= 1;
		std::cout << "New total of energy points for " << this->_name << " is " << this->_energyPoints << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0)
	{
		std::cout << this->_name << " can not recieve any more Damage, it's hit points are already set to 0." << std::endl;
		this->_hitPoints = 0;
	}
	else if (amount > this->_hitPoints)
	{
		std::cout << this->_name << " recieved " << this->_hitPoints << " points of damage. Total of hit points is now set to 0." << std::endl;
		this->_hitPoints = 0;
	}
	else
	{
		this->_hitPoints -= amount;
		std::cout << this->_name << " recieved " << amount << " points of damage. New total of hit points is " << this->_hitPoints << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		this->_hitPoints += amount;
		std::cout << "Reparing " << this->_name << " with " << amount << " hit points. New total hit points is " << this->_hitPoints << std::endl;
		this->_energyPoints -= 1;
	}
	else
		std::cout << "Sorry, " << this->_name << " hasn't got enough points to repair it's self.\n";
}

// SETTERS
void	ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void	ClapTrap::setHitPoints(unsigned int nbr)
{
	this->setHitPoints(nbr);
	std::cout << "Hit points of " << this->_name << " set to " << this->getHitPoints() << std::endl;
}

void	ClapTrap::setEnergyPoints(unsigned int nbr)
{
	this->_energyPoints = nbr;	
	std::cout << "Energy points of " << this->_name << " set to " << this->getEnergyPoints() << std::endl;
}

void	ClapTrap::setAttackDamage(unsigned int nbr)
{
	this->_attackDamage = nbr;
	std::cout << "Attack damage of " << this->_name << " set to " << this->getAttackDamage() << std::endl;
}

// GETTERS
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
