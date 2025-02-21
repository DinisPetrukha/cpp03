#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string.h>

class ClapTrap
{
	private:
		std::string	_name;
		int		_hit_points;
		int		_energy_points;
		int		_attack_damage;

	public:
		ClapTrap(std::string name);
		~ClapTrap();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		int		hit_points_getter(void);
		void	hit_points_setter(int n_hit);
		int		energy_damage_getter(void);
		void	energy_damage_setter(int n_energy);
};

#endif