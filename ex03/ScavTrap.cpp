#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "The scavTrap " << ClapTrap::getName() << " is now operational\n";
	ClapTrap::set_health(100);
	ClapTrap::set_damage(20);
	ClapTrap::set_mana(50);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destroyed\n";
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << ClapTrap::getName() << " is guarding the gate... \n";
}

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "The scavTrap " << ClapTrap::getName() << " is now operational\n";
	ClapTrap::set_health(100);
	ClapTrap::set_damage(20);
	ClapTrap::set_mana(50);
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
	std::cout << "ScavTrap " << ClapTrap::getName() << " copy constructor is called\n" ;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
	ClapTrap::operator=(other);
	std::cout << "ScavTrap " << ClapTrap::getName() << " Copy assignment called\n";
	return (*this);
}
