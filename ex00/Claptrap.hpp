#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class Claptrap {
	private :
		const std::string _name;
		int	_health;
		int	_mana;
		int	_damage;
	public :
		Claptrap(std::string name);
		Claptrap();
		Claptrap(const Claptrap &other);
		~Claptrap();
		Claptrap &operator=(const Claptrap &other);
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif

//rajouter canonical form pour ttes les class
//check 42evals