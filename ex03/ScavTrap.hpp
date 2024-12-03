#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
public:
	ScavTrap();										//Default constructor
	ScavTrap(std::string name);						//Parameterized constructor
	// ScavTrap(const std::string& name, unsigned int hit, unsigned int energy, unsigned int attack);//Parameterized constructor FULL
	ScavTrap(const ScavTrap& other);				//Copy consturctor
	ScavTrap& operator=(const ScavTrap& other);		//Copy assignment operator
	ScavTrap(ScavTrap&& other) noexcept;			//Move constructor
	ScavTrap& operator=(ScavTrap&& other) noexcept;	//Move assignment operator
	~ScavTrap();									//Destructor

	void	attack(const std::string& target);
	void	guardGate();
	void	printStatus();
};

#endif