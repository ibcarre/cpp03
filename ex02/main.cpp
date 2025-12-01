#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(){
	ClapTrap n("clap");
	ScavTrap o("Okay eh eh");
	FragTrap p("FragTrap");

	n.attack("elon musk");
	n.beRepaired(20);
	std::cout << "\n";
	std::cout << "\n";
	n.takeDamage(5);
	n.beRepaired(1);
	std::cout << "\n";
	std::cout << "\n";
	o.beRepaired(1);
	o.beRepaired(1);
	o.beRepaired(1);
	o.beRepaired(1);
	o.beRepaired(1);
	o.beRepaired(1);
	o.attack("***************");
	o.beRepaired(1);
	o.beRepaired(1);
	o.takeDamage(38);
	o.takeDamage(38);
	o.guardGate();
	std::cout << "\n";
	std::cout << "\n";
	p.attack("ouais");
	p.takeDamage(10);
	p.takeDamage(100);
	p.beRepaired(50);
	p.highFivesGuys();
}
