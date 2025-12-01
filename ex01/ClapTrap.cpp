#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name){
	std::cout << _name << " has been constructed\n";
	_health = 10;
	_mana = 10;
	_damage = 0;
}

ClapTrap::ClapTrap() : _name("default"){
	std::cout << _name << " has been default constructed\n";
	_health = 10;
	_mana = 10;
	_damage = 0;
}

ClapTrap::~ClapTrap() {
	std::cout << _name << "'ll be missed. Salut mon pote !\n";
}

ClapTrap::ClapTrap(const ClapTrap &other) : _name(other._name){
	std::cout << "Copy constructor called\n";
	this->_damage = other._damage;
	this->_health = other._health;
	this->_mana = other._mana;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	std::cout << "Copy assignment called\n";
	this->_damage = other._damage;
	this->_health = other._health;
	this->_mana = other._mana;
	return (*this);
}

void ClapTrap::attack(const std::string &target) {
	if (_mana > 0 && _health > 0) {
		std::cout << "ClapTrap attacked " << target << " for " << _damage << " point(s) of damage\n";
		std::cout << "The whole country is in shock. \"I would have never thought " << _name << " would do something like that... This is shocking\" said one of his closest friends\n";
		_mana--;
	}
	else {
		std::cout << "ClapTrap" << _name << "may be dead\n";
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_health <= 0)
		std::cout << "Stop kicking a dead horse\n";
	else {
		if (_health > amount)
			_health -= amount;
		else
			_health = 0;
		std::cout << "ClapTrap " << _name << " took " << amount << " damage\n";
		if (_health > 0) {
			std::cout << _name << " still has " << _health << " health points\n";
		}
		else
			std::cout << _name << " is dead and will be forever in our hearts...\n";
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_mana > 0 && _health > 0) {
		_health += amount;
		std::cout << _name << " is repairing himself. " << amount << " hp(s) are added. ClapTrap now has " << _health << "hps\n";
		_mana--;
	}
	else
		std::cout << "Not enough mana or dead\n";
}

void			ClapTrap::set_health(unsigned int hp) {
	this->_health = hp;
}

unsigned int	&ClapTrap::get_health() {
	return (this->_health);
}

void			ClapTrap::set_mana(unsigned int mana) {
	this->_mana = mana;
}

unsigned int	&ClapTrap::get_mana() {
	return (this->_mana);
}

void			ClapTrap::set_damage(unsigned int dmg) {
	this->_damage = dmg;
}

unsigned int	&ClapTrap::get_damage() {
	return (this->_damage);
}

const std::string 	&ClapTrap::getName() {
	return (this->_name);
}
