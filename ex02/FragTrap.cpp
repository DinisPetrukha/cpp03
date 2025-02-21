#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    hit_points_setter(100);
    energy_points_setter(50);
    attack_damage_setter(20);
    std::cout << "FragTrap " << name << " has been created!" << std::endl;
};

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << name_getter() << " has been destroyed!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name_getter() << " is requesting a positive high five! 🙌" << std::endl;
}