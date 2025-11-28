#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class Claptrap {
	private :
		const std::string _name;
		unsigned int	_health;
		unsigned int	_mana;
		unsigned int	_damage;
	public :
		Claptrap(std::string name);
		Claptrap();
		Claptrap(const Claptrap &other);
		~Claptrap();
		Claptrap &operator=(const Claptrap &other);
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void	set_health(unsigned int hp);
		unsigned int	&get_health();
		void	set_mana(unsigned int mana);
		unsigned int	&get_mana();
		void	set_damage(unsigned int dmg);
		unsigned int	&get_damage();
		const std::string &getName();
};

#endif