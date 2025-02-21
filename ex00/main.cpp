#include "ClapTrap.hpp"

// main.cpp
int main() {
    ClapTrap robot("R2D2");

    robot.attack("Enemy");
    robot.takeDamage(5);
    robot.beRepaired(3);
    robot.attack("Enemy");
    robot.takeDamage(8);
    robot.beRepaired(5);
	robot.attack("Enemy");

	ClapTrap robot2("R3D3");
	robot2.beRepaired(3);
	robot2.beRepaired(3);
	robot2.beRepaired(3);
	robot2.beRepaired(3);
	robot2.beRepaired(3);
	robot2.beRepaired(4);
	robot2.beRepaired(5);
	robot2.beRepaired(3);
	robot2.beRepaired(3);
	robot2.beRepaired(3);
	robot2.beRepaired(3);
	robot2.attack("Enemy");

    return 0;
}