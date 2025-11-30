#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : Claptrap(name) {
	std::cout << "The scavTrap " << Claptrap::getName() << " is now operational\n";
	Claptrap::set_health(100);
	Claptrap::set_damage(20);
	Claptrap::set_mana(50);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destroyed\n";
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << Claptrap::getName() << " is guarding the gate... \n";
}

ScavTrap::ScavTrap() : Claptrap() {
	std::cout << "The scavTrap " << Claptrap::getName() << " is now operational\n";
	Claptrap::set_health(100);
	Claptrap::set_damage(20);
	Claptrap::set_mana(50);
}

ScavTrap::ScavTrap(const ScavTrap &other) : Claptrap(other) {

}