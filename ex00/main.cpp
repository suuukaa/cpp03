#include "ClapTrap.hpp"

int main() {
    ClapTrap claptrap1;
    ClapTrap claptrap2(claptrap1);
    ClapTrap claptrap3;

    claptrap1.attack("Enemy1");
    claptrap1.takeDamage(30);
    claptrap1.beRepaired(20);
    claptrap3 = claptrap1;

    return 0;
}
