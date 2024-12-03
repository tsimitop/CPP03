#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string	_name;
public:
	DiamondTrap();											//Default constructor
	DiamondTrap(std::string name);							//Parameterized constructor
	DiamondTrap(const DiamondTrap& other);					//Copy consturctor
	DiamondTrap& operator=(const DiamondTrap& other);		//Copy assignment operator
	DiamondTrap(DiamondTrap&& other) noexcept;				//Move constructor
	DiamondTrap& operator=(DiamondTrap&& other) noexcept;	//Move assignment operator
	~DiamondTrap();											//Destructor

	void		attack(const std::string& target);
	void		whoAmI();
	std::string	getDiamondName();

	void	printStatus();
};

#endif