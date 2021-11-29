#pragma once

#include <iostream>
#include <string>

class Character
{
//create random number generator for attacks,special attacks, and heal
protected:
  int randomNumber(int range, int bonus)
  {
    srand(time(0));
    return rand() % range + bonus;
  }
  int attackDamage;
  int attackSpecialDamage;
  int healthIncrease;
  int health;
  int maxHealth;

public:
//create constructor and destructor
  Character() = default;
  virtual ~Character()=default;
  std::string name;

//function to set attack, special attack, heal 
  virtual void setAttackDamage(int x) {
    attackDamage = x;
  }
  virtual void setSpecialAttackDamage(int x) {
    attackSpecialDamage = x;
  }
  virtual void setHeal(int x) {
    healthIncrease = x;
  }
  virtual void setHealth(int h) {
    health = h;
  }

//functions to decrease health after attacks and increase after healing
  virtual void decreaseHealth(int d) {
    health -= d;
  }
  virtual void increaseHealth(int i) {
    health += i;
  }

//set attacks and heals to random values 
int randomSpecialAttack() {
    attackSpecialDamage = randomNumber(25, 50);
    return attackSpecialDamage;
  }

  int randomAttack() {
    attackDamage = randomNumber(15, 25);
    return attackDamage;
  }

  int randomHeal() {
    healthIncrease = randomNumber(10, 15);
    return healthIncrease;
  }

  virtual void attack(Character *character) = 0;
  virtual void specialAttack(Character *character) = 0;
  virtual void heal(Character *character) = 0;
  virtual void genRandomStats()=0;


//getters for attacks and heal
  int getAttackDamage() const {
    return attackDamage;
  }
  virtual int getHealth() const {
    return health;
  }
  int getSpecialAttackDamage() const {
    return attackSpecialDamage;
  }
  int getHeal() const {
    return healthIncrease;
  }
//after the first battle the health resets to the maximum for the heroes.
  virtual void resetHealth() { health = maxHealth; };

};
