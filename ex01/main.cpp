#include "ScavTrap.hpp"

int main() {
    // Create ClapTrap objects
    ClapTrap claptrap1("ClapTrap1");
    ClapTrap claptrap2("ClapTrap2");


    claptrap1.attack("Enemy1");
    claptrap1.takeDamage(30);
    claptrap1.beRepaired(20);

    // Create ScavTrap objects
    ScavTrap scavtrap1("ScavTrap1");
    ScavTrap scavtrap2("ScavTrap2");


    scavtrap1.attack("Enemy2");
    scavtrap2.attack("Enemy3");
    scavtrap1.takeDamage(30);
    scavtrap1.beRepaired(20);
    scavtrap1.guardGate();
}