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
        

