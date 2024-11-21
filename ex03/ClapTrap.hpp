#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>
# include <utility> // for std::move

class ClapTrap
{
protected:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;
public:
	ClapTrap();										//Default constructor
	ClapTrap(std::string name);						//Parameterized constructor
	ClapTrap(const ClapTrap& other);				//Copy constructor
	ClapTrap& operator=(const ClapTrap& other);		//Copy assignment operator
	ClapTrap(ClapTrap&& other) noexcept;			//Move constructor
	ClapTrap& operator=(ClapTrap&& other) noexcept;	//Move assigment operator
	~ClapTrap();									//Default Destructor

	void	attack(const std::string& target); //virtual
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	setHitPoints(unsigned int nbr);
	void	setEnergyPoints(unsigned int nbr);
	void	setAttackDamage(unsigned int nbr);
	void	setName(std::string name);

	int		getHitPoints();
	int		getEnergyPoints();
	int		getAttackDamage();
	std::string	getName() const;

};


#endif