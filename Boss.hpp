#pragma once


#include <string>
#include "Enemy.hpp"
#include "Character.hpp"

class Boss : public Enemy
{
private:
  int attackDamage;
  int attackSpecialDamage;
  int healthIncrease; // how much the character heals
  int health;
  int maxHealth;
  int randomNumber(int low, int high);

public:
  Boss();
  ~Boss()=default;
  virtual void genRandomStats();
  virtual int decideAction(Character *character);
  virtual void attack(Character *character);
  virtual void specialAttack(Character *character);
  virtual void heal(Boss *character);

public: //getters
 virtual int getAttackDamage() const { return attackDamage; }
  virtual int getSpecialAttackDamage() const { return attackSpecialDamage; }
  virtual int getHealth() const { return health; }
  virtual int getHeal() const { return healthIncrease; }

public:                                               // setters
  virtual void resetHealth() { health = maxHealth; }; // set his health back to 0
  virtual void decreaseHealth(int damage) { health -= damage; } 
  virtual void increaseHealth(int healing) { health += healing; }
};

Boss::Boss()
{
  genRandomStats();
}

void Boss::genRandomStats()
{
  attackDamage = abs(rand() % 2 * 25) + 25;
  attackSpecialDamage = abs(rand() % 2 * 25) + 30;
  healthIncrease = abs(rand() % 2 * 25);
  health = 300;
  maxHealth = health;
}

int Boss::decideAction(Character *character)
{
  int decision = abs(rand() % 10);
  if (0 <= decision && decision <= 3)
  {
    attack(character);
  }
  else if (4 <= decision && decision <= 6)
  {
    heal(this);
  }
  else if (7 <= decision && decision <= 9)
  {
    specialAttack(character);
  }
  return decision;
}

void Boss::attack(Character *character)
{
  int damage = randomNumber(getAttackDamage() - 2, getAttackDamage() + 2);
  std::cout << "Boss attacked with his Basic Attack and did " << damage << " damage." << std::endl;
  character->decreaseHealth(damage);
  std::cout << character->name << "'s health = " << character->getHealth() << std::endl;
}

void Boss::specialAttack(Character *character)
{
  int damage = randomNumber(getSpecialAttackDamage() - 4, getSpecialAttackDamage() + 4);
  std::cout << "Boss attacked with his Special and did " << damage << " damage." << std::endl;
  character->decreaseHealth(damage);
  std::cout << character->name << "'s health = " << character->getHealth() << std::endl;
}

void Boss::heal(Boss *character)
{
  int healing = this->getHeal();
  std::cout << "Boss chose to heal and added " << healing << " health." << std::endl;
  character->increaseHealth(healing);
}

int Boss::randomNumber(int low, int high)
{
  srand(time(0));
  return (low + rand() % (high - low));
}

