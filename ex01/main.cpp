#include "Claptrap.hpp"
#include "ScavTrap.hpp"

int	main(){
	Claptrap n("clap");
	ScavTrap o("Okay eh eh");

	n.attack("elon musk");
	n.beRepaired(20);
	n.takeDamage(5);
	n.beRepaired(1);
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
}