#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : Claptrap(name) {
	std::cout << "FragTrap " << Claptrap::getName() << " is now operational\n";
	Claptrap::set_damage(30);
	Claptrap::set_health(100);
	Claptrap::set_mana(100);
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << Claptrap::getName() << " has been destroyed\n";
}

void	FragTrap::highFivesGuys() {
	std::cout << "HIGH FIVE !!! *clap*\n";
}