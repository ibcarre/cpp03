#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clapname"), _name(name) {
        _damage = FragTrap::_damage;
        _mana = ScavTrap::_mana;
        _health = FragTrap::_health;
}

DiamondTrap::DiamondTrap() : ClapTrap(), _name(default) {
        _damage = FragTrap::_damage;
        _mana = ScavTrap::_mana;
        _health = FragTrap::_health;
}

DiamondTrap::~DiamondTrap() {
    std::cout << _name << " is being destroyed. Its ClapTrap name is " << ClapTrap::_name << "\n";
}

DiamondTrap &DiamondTrap::DiamondTrap(DiamondTrap &other) : DiamondTrap(other._name) {
    _damage = other._damage;
    _mana = other._mana;
    _health = other._health;
}
