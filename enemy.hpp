#ifndef Enemy_HPP
#define Enemy_HPP
#include <iostream>
#include "character.hpp"

enum enemyType {Goblin, Orc}; //enum for enemy type

class Enemy : public Character {
public:
    Enemy(const enemyType& type);
    void enemyStats(const enemyType& type);
    std::string getType(const enemyType& type);
};

#endif