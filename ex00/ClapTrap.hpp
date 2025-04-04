#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>


#include "ClapTrap.hpp"

class ClapTrap{

    std::string name;
    int hit_point;
    int energy_point;
    int attack_dammage;

    public :
        ClapTrap();
        ClapTrap(const ClapTrap &copy);
        ~ClapTrap();
        ClapTrap &operator=(const ClapTrap &copy);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif
