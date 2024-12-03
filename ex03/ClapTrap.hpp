#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>

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
	// ClapTrap(const std::string& name, unsigned int hit, unsigned int energy, unsigned int attack);//Parameterized constructor FULL
	ClapTrap(const ClapTrap& other);				//Copy constructor
	ClapTrap& operator=(const ClapTrap& other);		//Copy assignment operator
	ClapTrap(ClapTrap&& other) noexcept;			//Move constructor
	ClapTrap& operator=(ClapTrap&& other) noexcept;	//Move assigment operator
	~ClapTrap();									//Destructor

	void	attack(const std::string& target); //virtual
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	setHitPoints(unsigned int nbr);
	void	setEnergyPoints(unsigned int nbr);
	void	setAttackDamage(unsigned int nbr);
	void	setName(std::string name);

	int		getHitPoints() const;
	int		getEnergyPoints() const;
	int		getAttackDamage() const;
	std::string	getName() const;

};


#endif