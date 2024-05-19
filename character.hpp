#ifndef Character_HPP
#define Character_HPP
#include <iostream>

enum Race {Dwarf, Elf, Angel, Demon}; //different races you can choose
enum Kingdom {Leauchi, Xix, Itathar, Oldjin}; //place of residence

class Character {
protected:
    Race race; //to choose your race
    Kingdom kingdom; //sets kingdom
    std::string name; //your character name
    int level; //get your level
    int cur_exp; //see how much exp you're at
    int req_exp; //how much exp needed before level up
    int max_Health; //max health at your level
    int current_Health; //current health
    int attack_Power; //amount of attack points you can inflict
    int attack_Speed; //how fast you can attack
    int crit_Chance; //how often you can crit
public:
    Character();
    Character(Race& yourRace, Kingdom& yourKingdom); //sets everything default
    void setName(std::string yourName);
    std::string getName() const; //retrieves name
    std::string getRace() const; //retrieves race
    std::string getKingdom() const; //retrieves kingdom
    int getCurrentHealth() const;//retrieves current health
    int getMaxHealth() const; //retrieves max health
    int getLevel() const; //retrieves level
    int getAttackPower() const; //retrieves attack power
    int getAttackSpeed() const; //retrieves attack speed
    int getCrit() const; //retrieves crit chance
    int getCurrentExperience() const; //retrieves current exp
    int getRequiredExperience() const; //retrieves required exp
    void getStats(); //returns your character's current stats
    void setCurrentHP(int& curHP);
    void setMaxHP(int& maxHP);
    void setCrit(int& crit);
    void setAtk(int& atk);
    void setSpd(int& spd);
};

#endif