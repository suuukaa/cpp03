#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("ClapTrap"), hit_point(10), energy_point(10), attack_dammage(0)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy){
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

ClapTrap::~ClapTrap(){
    std::cout << "Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy){
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &copy)
    {
        name = copy.name;
        hit_point = copy.hit_point;
        energy_point = copy.energy_point;
        attack_dammage = copy.attack_dammage;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target){
    if (hit_point >= 0 || energy_point >= 0){
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing "
        << attack_dammage << " point of damage " << std::endl;
        energy_point--;
    }
}

void ClapTrap::takeDamage(unsigned int amount){
    hit_point -= amount;
    if (hit_point < 0) hit_point = 0;
    std::cout << "ClapTrap " << name << " takes " << amount 
    << " points of damage! HP is now " << hit_point << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    hit_point += amount;
    if (hit_point >= 0 || energy_point >= 0){
        std::cout << "ClapTrap " << name << " is repaired by " << amount 
        << " points! HP is now " << hit_point << std::endl;
        energy_point--;
    }
}
