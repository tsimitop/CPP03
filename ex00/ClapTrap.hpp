#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>

class ClapTrap
{
private:
	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;
public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& other);
	ClapTrap& operator=(const ClapTrap& other);
	~ClapTrap();

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	setHitPoints(unsigned int nbr);
	void	setEnergyPoints(unsigned int nbr);
	void	setAttackDamage(unsigned int nbr);
	void	setName(std::string name);

	int		getHitPoints();
	int		getEnergyPoints();
	int		getAttackDamage();
	std::string	getName();

};


#endif