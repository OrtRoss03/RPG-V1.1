#ifndef ENTITY_HPP_
#define ENTITY_HPP_

#include <iostream>

class Entity {
public:
    //Default constructor
    Entity();
    //Parameter constructor
    Entity(int level, int curr_xp, int req_xp, double max_hp, double curr_hp, double crit_chance, double spd, double atk);

    //Accesor Functions
    int getLevel() const;
    int getCurrentExp() const;
    int getRequiredExp() const;
    double getMaxHp() const;
    double getCurrentHp() const;
    double getCriticalChance() const;
    double getSpeed() const;
    double getAttack() const;

    //Mutator Functions
    void setLevel(const int& level);
    void getCurrentExp(const int& curr_xp);
    void getRequiredExp(const int& req_xp);
    void setMaxHp(const double& max_hp);
    void setCurrentHp(const double& curr_hp);
    void setCriticalChance(const double& crit_chance);
    void setSpeed(const double& spd);
    void setAttack(const double& atk);

private:
    int level_, curr_xp_, req_xp_;
    double max_hp_, curr_hp_, crit_chance_, spd_, atk_;
};

#endif