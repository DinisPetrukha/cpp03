#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name) {
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
	std::cout << _name + " ClapTrap has been created" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << _name + " ClapTrap has been destroyed" << std::endl;
}

std::string	ClapTrap::name_getter(void)
{
	return(_name);
}

void	ClapTrap::name_setter(std::string name)
{
	_name = name;
}

int	ClapTrap::hit_points_getter(void)
{
	return (_hit_points);
}

void	ClapTrap::hit_points_setter(int n_hit)
{
	_hit_points = n_hit;
}

int	ClapTrap::energy_points_getter(void)
{
	return (_energy_points);
}

void	ClapTrap::energy_points_setter(int n_energy)
{
	_energy_points = n_energy;
}

int		ClapTrap::attack_damage_getter(void)
{
	return (_attack_damage);
}

void	ClapTrap::attack_damage_setter(int n_damage)
{
	_attack_damage = n_damage;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit_points <= (int)amount)
		_hit_points = 0;
	else
		_hit_points -= (int)amount;

	std::cout << _name << " takes " << amount << " damage. " << _hit_points << " remaining." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hit_points == 0)
	{
		std::cout << "ClapTrap " << _name << " can't repair - it has no hit points left!" << std::endl;
		return;
	}
	if (_energy_points == 0) {
		std::cout << "ClapTrap " << _name << " can't repair - it has no energy points left!" << std::endl;
		return;
	}

	_energy_points--;
	_hit_points += amount;
	std::cout << _name << " being repaired, " << amount << " point added " << _hit_points << " in total " << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_hit_points == 0)
	{
		std::cout << "ClapTrap " << _name << " can't attack - it has no hit points left!" << std::endl;
		return;
	}
	if (_energy_points == 0) {
		std::cout << "ClapTrap " << _name << " can't attack - it has no energy points left!" << std::endl;
		return;
	}

	_energy_points--;
	std::cout << "ClapTrap " << _name << " attacks " << target
              << ", causing " << _attack_damage << " points of damage!" << std::endl;
}


