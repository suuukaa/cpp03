#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("FragTrap"){

    hit_point = 100;
    energy_point = 100;
    attack_dammage = 30;
    std::cout << "Default constructor called FragTrap" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    std::cout << "Constructor with name called FragTrap for " << name << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy) {
    std::cout << "Copy constructor called FragTrap" << std::endl;
    *this = copy;
}

FragTrap::~FragTrap() {
    std::cout << "Destructor called FragTrap" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &copy) {
    std::cout << "Copy assignment operator called FragTrap" << std::endl;
    if (this != &copy) {
        ClapTrap::operator=(copy);
    }
    return *this;
}

void FragTrap::attack(const std::string& target) {
    if (hit_point > 0 && energy_point > 0) {
        std::cout << "FragTrap " << name << " attacks " << target << ", causing "
                  << attack_dammage << " points of damage!" << std::endl;
        energy_point--;
    } else {
        std::cout << "FragTrap " << name << " doesn't have enough energy or hit points to attack." << std::endl;
    }
}

void FragTrap::highFivesGuys(void){
    std::cout << " positive high-fives" << std::endl;
}
