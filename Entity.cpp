#include "Entity.hpp"

Entity::Entity() : level_{1}, curr_xp_{0}, req_xp_{100}, max_hp_{100.0}, curr_hp_{100.0}, crit_chance_{0.1}, spd_{1.0}, atk_{1.0} {}

Entity::Entity(int level, int curr_xp, int req_xp, double max_hp, double curr_hp, double crit_chance, double spd, double atk) : 
                level_{level}, curr_xp_{curr_xp}, req_xp_{req_xp}, max_hp_{max_hp}, curr_hp_{curr_hp}, crit_chance_{crit_chance}, spd_{spd}, atk_{atk} {}

int Entity::getLevel() const {
    return level_;
}
int Entity::getCurrentExp() const{
    return curr_xp_;
}
int Entity::getRequiredExp() const{
    return req_xp_;
}
double Entity::getMaxHp() const{
    return max_hp_;
}
double Entity::getCurrentHp() const{
    return curr_hp_;
}
double Entity::getCriticalChance() const{
    return crit_chance_;
}
double Entity::getSpeed() const{
    return spd_;
}
double Entity::getAttack() const{
    return atk_;
}

void Entity::setLevel(const int& level){
    level_ = level;
}
void Entity::getCurrentExp(const int& curr_xp){
    curr_xp_ = curr_xp;
}
void Entity::getRequiredExp(const int& req_xp){
    req_xp_ = req_xp;
}
void Entity::setMaxHp(const double& max_hp){
    max_hp_ = max_hp;
}
void Entity::setCurrentHp(const double& curr_hp){
    curr_hp_ = curr_hp;
}
void Entity::setCriticalChance(const double& crit_chance){
    crit_chance_ = crit_chance;
}
void Entity::setSpeed(const double& spd){
    spd_ = spd;
}
void Entity::setAttack(const double& atk){
    atk_ = atk;
}