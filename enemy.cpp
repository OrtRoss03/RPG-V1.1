#include <iostream>
#include "enemy.hpp"

Enemy::Enemy(const enemyType& type) : Character() {
    switch (type)
    {
    case Goblin:
        this->max_Health = 230;
        this->current_Health = 230;
        this->attack_Power = 10;
        this->attack_Speed = 25;
        this->crit_Chance = 1;
        break;
    case Orc:
        this->max_Health = 400;
        this->current_Health = 400;
        this->attack_Power = 25;
        this->attack_Speed = 40;
        this->crit_Chance = 10;
        break;
    }

}

std::string Enemy::getType(const enemyType& type) {
    switch (type) {
    case Goblin:
        return "Goblin";
    case Orc:
        return "Orc";
    }
    return 0;
}

void Enemy::enemyStats(const enemyType& type) {
    std::cout << getType(type) << "\n";
    std::cout << "Health: " << getCurrentHealth() << "/" << getMaxHealth() << "\n";
    std::cout << "Attack: " << getAttackPower() << "\n";
    std::cout << "Speed: " << getAttackSpeed() << "\n";
    std::cout << "Crit: " << getCrit() << "%" << "\n";
}