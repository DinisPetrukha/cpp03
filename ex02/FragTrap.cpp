#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	hit_points_setter(100);
	energy_points_setter(100);
	attack_damage_setter(30);
	std::cout << "FragTrap (default) has been created!" << std::endl;
}

// Construtor parametrizado
FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	hit_points_setter(100);
	energy_points_setter(100);
	attack_damage_setter(30);
	std::cout << "FragTrap " << name_getter() << " has been created!" << std::endl;
}

// Construtor de cópia
FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	*this = other;
	std::cout << "FragTrap " << name_getter() << " has been copied!" << std::endl;
}

// Operador de atribuição
FragTrap& FragTrap::operator=(const FragTrap& other) {
	if (this != &other) {
		ClapTrap::operator=(other); // Chama a atribuição da classe base
	}
	std::cout << "FragTrap " << name_getter() << " has been assigned!" << std::endl;
	return *this;
}

// Destrutor
FragTrap::~FragTrap() {
	std::cout << "FragTrap " << name_getter() << " has been destroyed!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name_getter() << " is requesting a positive high five! 🙌" << std::endl;
}