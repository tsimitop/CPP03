#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ScavTrap.hpp"

class FragTrap : public virtual ClapTrap
{
public:
	FragTrap();										//Default constructor
	FragTrap(std::string name);						//Parameterized constructor
	FragTrap(const FragTrap& other);				//Copy consturctor
	FragTrap& operator=(const FragTrap& other);		//Copy assignment operator
	FragTrap(FragTrap&& other) noexcept;			//Move constructor
	FragTrap& operator=(FragTrap&& other) noexcept;	//Move assignment operator
	~FragTrap();									//Destructor

	void	highFivesGuys(void);
	void	printStatus();
};

#endif