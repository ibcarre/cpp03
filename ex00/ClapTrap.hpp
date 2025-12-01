#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
protected:
    const std::string _name;
    int _health;
    int _mana;
    int _damage;

public:
    ClapTrap(std::string name);
    ClapTrap();
    ClapTrap(const ClapTrap &other);
    ~ClapTrap();
    ClapTrap &operator=(const ClapTrap &other);
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif

//rajouter canonical form pour ttes les class
//check 42evals
