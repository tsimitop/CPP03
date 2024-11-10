#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>
# include <utility> // for std::move

class ClapTrap
{
private:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& other);
	ClapTrap& operator=(const ClapTrap& other);
	ClapTrap(ClapTrap&& other) noexcept;
	ClapTrap& operator=(ClapTrap&& other) noexcept;
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