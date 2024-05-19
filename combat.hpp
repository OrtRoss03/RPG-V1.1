#ifndef Combat_HPP
#define Combat_HPP
#include <iostream>
#include "character.hpp"
#include "enemy.hpp"

class Combat {
private:
    int finalAttack = 0;
    int health = 0;
public:
    Combat();
    void Turn(Character& gamer, Enemy& nemesis);
    void showStats(Character& player, Enemy& opponent, enemyType type);
};

#endif