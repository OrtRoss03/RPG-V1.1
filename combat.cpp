#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "combat.hpp"

Combat::Combat() {
}

void Combat::showStats(Character& player, Enemy& opponent, enemyType type) {
    std::cout << player.getName() << std::setw(64) << opponent.getType(type) << "\n";
    std::cout << "Health: " << player.getCurrentHealth() << "/" << player.getMaxHealth() << std::setw(55) << "Health: " << opponent.getCurrentHealth() << "/" << opponent.getMaxHealth() << "\n";
    std::cout << "Attack: " << player.getAttackPower() << std::setw(60) << "Attack: " << opponent.getAttackPower() << "\n";
    std::cout << "Speed: " << player.getAttackSpeed() << std::setw(60) << "Speed: " << opponent.getAttackSpeed() << "\n";
    std::cout << "Crit: " << player.getCrit() << "%" << std::setw(59) << "Crit: " << opponent.getCrit() << "%" << "\n";
}

void Combat::Turn(Character& gamer, Enemy& nemesis) {
    if (gamer.getAttackSpeed() > nemesis.getAttackSpeed()) {
        if (gamer.getCrit() > (rand() % 100)) {
            int finalAttack = gamer.getAttackPower() * 2;
            int health = nemesis.getCurrentHealth();
            health -= finalAttack;
            nemesis.setCurrentHP(health);
        }
        else {
            finalAttack = gamer.getAttackPower();
            health = nemesis.getCurrentHealth();
            health -= finalAttack;
            nemesis.setCurrentHP(health);
        }
        if (nemesis.getCrit() > (rand() % 100)) {
            int finalAttack = nemesis.getAttackPower() * 2;
            int health = gamer.getCurrentHealth();
            health -= finalAttack;
            gamer.setCurrentHP(health);
        }
        else {
            finalAttack = nemesis.getAttackPower();
            health = gamer.getCurrentHealth();
            health -= finalAttack;
            gamer.setCurrentHP(health);
        }
    }
    else {
        if (nemesis.getCrit() > (rand() % 100)) {
            int finalAttack = nemesis.getAttackPower() * 2;
            int health = gamer.getCurrentHealth();
            health -= finalAttack;
            gamer.setCurrentHP(health);
        }
        else {
            finalAttack = nemesis.getAttackPower();
            health = gamer.getCurrentHealth();
            health -= finalAttack;
            gamer.setCurrentHP(health);
        }
        if (gamer.getCrit() > (rand() % 100)) {
            int finalAttack = gamer.getAttackPower() * 2;
            int health = nemesis.getCurrentHealth();
            health -= finalAttack;
            nemesis.setCurrentHP(health);
        }
        else {
            finalAttack = gamer.getAttackPower();
            health = nemesis.getCurrentHealth();
            health -= finalAttack;
            nemesis.setCurrentHP(health);
        }
    }
}