#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
int main()
{
    FragTrap frag("max");
    FragTrap tag("xtag");
    ScavTrap scav("max");
    ScavTrap stag("xtag");
    NinjaTrap Ninja("max");
    NinjaTrap ntag("xtag");
    frag.meleeAttack("crap");
    frag.takeDamage(20);
    frag.rangedAttack("craf");
    frag.takeDamage(30);
    frag.beRepaired(15);
    frag.takeDamage(5);
    frag.vaulthunter_dot_exe("xtag");
    tag.takeDamage(200);
    scav.meleeAttack("crap");
    scav.takeDamage(20);
    scav.rangedAttack("craf");
    scav.takeDamage(30);
    scav.beRepaired(15);
    scav.takeDamage(5);
    scav.challengeNewcomer("xtag");
    stag.takeDamage(200);
    SuperTrap super("otman");
    super.meleeAttack("some");
    return (0);
    return (0);
}