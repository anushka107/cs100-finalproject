#pragma once

#include "Character.hpp"
#include "Boss.hpp"

//create the character Iron Man (constructor and destructor)
class Iron_Man : public Character
{
public:
//generate the stats for Iron Man
  Iron_Man()
  {
    genRandomStats();
  }
  ~Iron_Man()=default;

//setting the stats for Iron Man
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
  
  
//setting the attack for Iron Man
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
  
  //setting the special attack for Iron Man
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
  
  //setting heal for Iron Man
  virtual void heal(Character *character)
  {
    std::cout << "Iron Man chose to heal and added " << getHeal() << " health." << std::endl;
    character->increaseHealth(getHeal());
  }
  
 //setting the health back to regular
 virtual void resetHealth() { health = maxHealth; }; // set his health back to 0
private:
  int maxHealth;
};
        

