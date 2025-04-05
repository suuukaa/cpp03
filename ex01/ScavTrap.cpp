#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("ScavTrap") {
    std::cout << "Default constructor called ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
    std::cout << "Constructor with name called ScavTrap for " << name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) {
    std::cout << "Copy constructor called ScavTrap" << std::endl;
    *this = copy;
}

ScavTrap::~ScavTrap() {
    std::cout << "Destructor called ScavTrap" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &copy) {
    std::cout << "Copy assignment operator called ScavTrap" << std::endl;
    if (this != &copy) {
        ClapTrap::operator=(copy);
    }
    return *this;
}

void ScavTrap::attack(const std::string& target) {
    if (hit_point > 0 && energy_point > 0) {
        std::cout << "ScavTrap " << name << " attacks " << target << ", causing "
                  << attack_dammage << " points of damage!" << std::endl;
        energy_point--;
    } else {
        std::cout << "ScavTrap " << name << " doesn't have enough energy or hit points to attack." << std::endl;
    }
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
