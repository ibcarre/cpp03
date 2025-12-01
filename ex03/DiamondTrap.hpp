#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
    private :
        const std::string _name;
    public :
        DiamondTrap(std::string n);
        DiamondTrap();
        ~DiamondTrap();
        DiamondTrap(DiamondTrap &other);
        DiamondTrap &operator=(DiamondTrap &other);
        void attack(std::string const &target);
        void    whoAmI();
};

#endif
