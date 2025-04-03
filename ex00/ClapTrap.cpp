#include "ClapTrap.hpp"

class ClapTrap{

    std::string name;
    int hit_point;
    int energi_point;
    int attack_dammage;

    public :
        ClapTrap();
        ClapTrap(const ClapTrap &copy);
        ~ClapTrap();
        //operator

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};



        Fixed();
        Fixed(const Fixed &copy);
        Fixed(const int integer);
        Fixed(const float number);
        ~Fixed();
        
        Fixed   &operator=(const Fixed &copy);