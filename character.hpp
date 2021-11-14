#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__
 
#include <cstring>

class Character {
public:
  void setAttackDamage(int x){
    attackDamage = x;
  }
  void setSpecialAttackDamage(int x){
   attackSpecialDamage = x;
  }
  void setHeal(int x){
    healthIncrease = x;
  }
  void setHealth(int h){
    health = h;
  }
  void decreaseHealth(int d){
    health -= d;
  }
  void increaseHealth(int i){
    health += i;
  }
 
  virtual void attack(Character* character) = 0;
  int getAttackDamage() { return attackDamage; }
  int getHealth() { return health; }
 
  virtual void specialAttack(Character* character) = 0;
  int getSpecialAttackDamage() { return attackSpecialDamage; }
 
  virtual void heal(Character* character) = 0;
  int getHeal() { return healthIncrease; }
 
 private:
 int attackDamage;
 int attackSpecialDamage;
 int healthIncrease;
 int health;
};
