#include "ScavTrap.hpp"

int main() {

    ClapTrap claptrap1;
    ClapTrap claptrap2(claptrap1);

    ScavTrap scavtrap1("ScavTrap1");
    ScavTrap scavtrap2("ScavTrap2");

    scavtrap1.attack("Enemy1");
    scavtrap2.attack("Enemy2");

    claptrap1.attack("Enemy1");
    claptrap1.takeDamage(30);
    claptrap1.beRepaired(20);

    scavtrap1.takeDamage(30);
    scavtrap1.beRepaired(20);

    scavtrap1.guardGate();

    return 0;
}
