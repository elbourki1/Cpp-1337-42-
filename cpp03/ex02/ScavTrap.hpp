#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
        static std::string challenges[5];
    public:
        ScavTrap(std::string name);
        ScavTrap();
        ~ScavTrap();
        void    rangedAttack(std::string const & target);
        void    meleeAttack(std::string const & target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        void    challengeNewcomer(std::string const & target);
};