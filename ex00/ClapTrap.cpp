#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name) {
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
	std::cout << _name + " ClapTrap has been created" << std::endl;
}

ClapTrap::ClapTrap() : _name("Default"), _hit_points(10), _energy_points(10), _attack_damage(0) {
	std::cout << "ClapTrap " << _name << " has been created (default)!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	*this = other;
	std::cout << "ClapTrap " << _name << " has been copied!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	if (this != &other) {
		this->_name = other._name;
		this->_hit_points = other._hit_points;
		this->_energy_points = other._energy_points;
		this->_attack_damage = other._attack_damage;
	}
	std::cout << "ClapTrap " << _name << " has been assigned!" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << _name + " ClapTrap has been destroyed" << std::endl;
}

int	ClapTrap::hit_points_getter(void)
{
	return (_hit_points);
}

void	ClapTrap::hit_points_setter(int n_hit)
{
	_hit_points = n_hit;
}

int	ClapTrap::energy_damage_getter(void)
{
	return (_energy_points);
}

void	ClapTrap::energy_damage_setter(int n_energy)
{
	_energy_points = n_energy;
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


