#pragma once

#include <iostream>
#include <string>

class Character
{
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
  Character() = default;
  virtual ~Character()=default;
  std::string name;

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
  virtual void decreaseHealth(int d) {
    health -= d;
  }
  virtual void increaseHealth(int i) {
    health += i;
  }

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
  virtual void resetHealth() { health = maxHealth; };

};

Iron_Man.hpp

#pragma once

#include "Character.hpp"
#include "Boss.hpp"

class Iron_Man : public Character
{
public:
  Iron_Man()
  {
    genRandomStats();
  }
  ~Iron_Man()=default;

public:
  virtual void genRandomStats()
  {
    name = "Iron Man";
    health = 200;
    maxHealth = health;
    setAttackDamage(rand() % 25 + rand() % 25);
    setSpecialAttackDamage(rand() % 50 + rand() % 25);
    setHeal(20 + rand() % 10);
  }
  virtual void attack(Character *character)
  {
    int damage = getAttackDamage();
    Boss *bp = dynamic_cast<Boss *>(character);
    if (bp != nullptr)
    {
      damage *= 2;
      std::cout << "Iron Man pulled out all the stops, and attacked with his lasers and did " << damage << " damage." << std::endl;
    }
    else
    {
      std::cout << "Iron Man attacked with his lasers and did " << damage << " damage." << std::endl;
    }

    character->decreaseHealth(damage);
    std::cout << "Enemy health = " << character->getHealth() << std::endl;
  }
  virtual void specialAttack(Character *character)
  {
    int damage = getSpecialAttackDamage();
    Boss *bp = dynamic_cast<Boss *>(character);
    if (bp != nullptr)
    {
      damage *= 2;
      std::cout << "Iron Man pulled out all the stops, and attacked with his Special Hand Cannon and did " << damage << " damage." << std::endl;
    }
    else
    {
      std::cout << "Iron Man attacked with his Special Hand Cannon and did " << damage << " damage." << std::endl;
    }
    character->decreaseHealth(damage);
    std::cout << "Enemy health = " << character->getHealth() << std::endl;
  }
  virtual void heal(Character *character)
  {
    std::cout << "Iron Man chose to heal and added " << getHeal() << " health." << std::endl;
    character->increaseHealth(getHeal());
  }
 virtual void resetHealth() { health = maxHealth; }; // set his health back to 0
private:
  int maxHealth;
};
     

