#include <iostream>
#include "character.hpp"

Character::Character() {
    this->max_Health = 0;
    this->current_Health = 0;
    this->crit_Chance = 0;
    this->attack_Power = 0;
    this->attack_Speed = 0;
}

Character::Character(Race& yourRace, Kingdom& yourKingdom) {
    this->kingdom = yourKingdom;
    this->level = 1;
    this->cur_exp = 0;
    this->req_exp = 100;
    this->race = yourRace;
    if (yourRace == Race::Dwarf) {
        this->max_Health = 130;
        this->current_Health = 130;
        this->attack_Power = 45;
        this->attack_Speed = 20;
        this->crit_Chance = 1;
    }
    else if(yourRace == Race::Elf) {
        this->max_Health = 90;
        this->current_Health = 90;
        this->attack_Power = 30;
        this->attack_Speed = 60;
        this->crit_Chance = 10;
    }
    else if(yourRace == Race::Demon) {
        this->max_Health = 190;
        this->current_Health = 190;
        this->attack_Power = 65;
        this->attack_Speed = 30;
        this->crit_Chance = 15;
    }
    else if(yourRace == Race::Angel) {
        this->max_Health = 110;
        this->current_Health = 110;
        this->attack_Power = 70;
        this->attack_Speed = 45;
        this->crit_Chance = 30;
    }
}

void Character::setName(std::string yourName) {
    this->name = yourName;
}

std::string Character::getRace() const {
    if (this->race == Race::Dwarf) {
        return "Dwarf";
    }
    else if (this->race == Race::Elf) {
        return "Elf";
    }
    else if (this->race == Race::Demon) {
        return "Demon";
    }
    else if (this->race == Race::Angel) {
        return "Angel";
    }
    return 0;
}

int Character::getMaxHealth() const {
    return max_Health;
}

int Character::getCurrentHealth() const {
    return current_Health;
}

std::string Character::getName() const {
    return name;
}

int Character::getLevel() const {
    return level;
}

int Character::getAttackPower() const {
    return attack_Power;
}

int Character::getAttackSpeed() const {
    return attack_Speed;
}

int Character::getCurrentExperience() const {
    return cur_exp;
}

int Character::getRequiredExperience() const {
    return req_exp;
}

int Character::getCrit() const {
    return crit_Chance;
}

void Character::setCurrentHP(int& curHP) {
    this->current_Health = curHP;
}

void Character::setMaxHP(int& maxHP) {
    this->max_Health = maxHP;
}

void Character::setCrit(int& crit) {
    this->crit_Chance = crit;
}

void Character::setAtk(int& atk) {
    this->attack_Power = atk;
}

void Character::setSpd(int& spd) {
    this->attack_Speed = spd;
}

std::string Character::getKingdom() const {
    if (this->kingdom == Kingdom::Leauchi) {
        return "Leauchi";
    }
    else if (this->kingdom == Kingdom::Itathar) {
        return "Itathar";
    }
    else if (this->kingdom == Kingdom::Xix) {
        return "Xix";
    }
    else if (this->kingdom == Kingdom::Oldjin) {
        return "Oldjin";
    }
    return 0;
}

void Character::getStats() {
    std::cout << "Name: " << getName() << "\n";
    std::cout << "Race: " << getRace() << "\n";
    std::cout << "Kingdom: " << getKingdom() << std::endl;
    std::cout << "Level: " << getLevel() << std::endl;
    std::cout << "Current exp: " << getCurrentExperience() << std::endl;
    std::cout << "Required exp: " << getRequiredExperience() << std::endl;
    std::cout << "Health: " << getCurrentHealth() << "/" << getMaxHealth() << "\n";
    std::cout << "Attack: " << getAttackPower() << std::endl;
    std::cout << "Speed: " << getAttackSpeed() << std::endl;
    std::cout << "Crit: " << getCrit() << "%" << std::endl;
}