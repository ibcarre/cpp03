#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap " << ClapTrap::getName() << " is now operational\n";
	ClapTrap::set_damage(30);
	ClapTrap::set_health(100);
	ClapTrap::set_mana(100);
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << ClapTrap::getName() << " has been destroyed\n";
}

void	FragTrap::highFivesGuys() {
	std::cout << "HIGH FIVE !!! *clap*\n";
}

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "FragTrap " << ClapTrap::getName() << " is now operational\n";
	ClapTrap::set_health(100);
	ClapTrap::set_damage(20);
	ClapTrap::set_mana(50);
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
	std::cout << "FragTrap " << ClapTrap::getName() << " copy constructor is called\n" ;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
	ClapTrap::operator=(other);
	std::cout << "FragTrap " << ClapTrap::getName() << " Copy assignment called\n";
	return (*this);
}
