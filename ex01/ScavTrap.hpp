#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "Claptrap.hpp"

class ScavTrap: public Claptrap {
	public :
		ScavTrap(std::string name);
		~ScavTrap();
		void guardGate();
};

#endif