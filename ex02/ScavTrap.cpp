#include "ScavTrap.hpp"


ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    hit_points_setter(100);
    energy_points_setter(50);
    attack_damage_setter(20);
    std::cout << "ScavTrap " << name << " has been created!" << std::endl;
};

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << name_getter() << " has been destroyed!" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (hit_points_getter() == 0)
	{
		std::cout << "ScavTrap " << name_getter() << " can't attack - it has no hit points left!" << std::endl;
		return;
	}
	if (energy_points_getter() == 0) {
		std::cout << "ScavTrap " << name_getter() << " can't attack - it has no energy points left!" << std::endl;
		return;
	}

	energy_points_setter(energy_points_getter() - 1);
	std::cout << "ScavTrap " << name_getter() << " attacks " << target
              << ", causing " << attack_damage_getter() << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name_getter() << " is now in Gate Keeper mode!" << std::endl;
}
