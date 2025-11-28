#include "Claptrap.hpp"

Claptrap::Claptrap(std::string name) : _name(name){
	std::cout << _name << " has been constructed\n";
	_health = 10;
	_mana = 10;
	_damage = 0;
}

Claptrap::Claptrap() : _name("default"){
	std::cout << _name << " has been default constructed\n";
	_health = 10;
	_mana = 10;
	_damage = 0;
}

Claptrap::~Claptrap() {
	std::cout << _name << "'ll be missed. Salut mon pote !\n";
}

Claptrap::Claptrap(const Claptrap &other) : _name(other._name){
	std::cout << "Copy constructor called\n";
	this->_damage = other._damage;
	this->_health = other._health;
	this->_mana = other._mana;
}

Claptrap &Claptrap::operator=(const Claptrap &other) {
	std::cout << "Copy assignment called\n";
	this->_damage = other._damage;
	this->_health = other._health;
	this->_mana = other._mana;
	return (*this);
}


void Claptrap::attack(const std::string &target) {
	if (_mana > 0 && _health > 0) {
		std::cout << "Claptrap attacked " << target << " for " << _damage << " point(s) of damage\n";
		std::cout << "The whole country is in shock. \"I would have never thought " << _name << " would do something like that... This is shocking\" said one of his closest friends\n";
		_mana--;
	}
	else {
		std::cout << "Claptrap" << _name << "may be dead\n";
	}
}

void Claptrap::takeDamage(unsigned int amount) {
	if (_health <= 0)
		std::cout << "Stop kicking a dead horse\n";
	else {
		_health -= amount;
		std::cout << "Claptrap " << _name << " took " << amount << " damage\n";
		if (_health > 0) {
			std::cout << _name << " still has " << _health << " health points\n";
		}
		else
			std::cout << _name << " is dead and will be forever in our hearts...\n";
	}
}

void Claptrap::beRepaired(unsigned int amount) {
	if (_mana > 0 && _health > 0) {
		_health += amount;
		std::cout << _name << " is repairing himself. " << amount << " hp(s) are added. Claptrap now has " << _health << "hps\n";
		_mana--;
	}
	else
		std::cout << "Not enough mana or dead\n";
}