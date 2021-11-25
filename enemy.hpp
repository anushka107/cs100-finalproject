#pragma once

#include <string>

#include "character.hpp"

using std::string;

class Enemy
{
private:
  int attackDamage;
  int attackSpecialDamage;
  int healthIncrease; // how much the character heals
  int health;
  int maxHealth;
  int randomNumber(int low, int high);

public:
  Enemy();
  ~Enemy()=default;
  virtual void genRandomStats();
  virtual void decideAction(Character *character);
  virtual void attack(Character *character);
  virtual void specialAttack(Character *character);
  virtual void heal(Enemy *character);

public: getters
  virtual int getAttackDamage() const { return attackDamage; }
  virtual int getSpecialAttackDamage() const { return attackSpecialDamage; }
  virtual int getHealth() const { return health; }
  virtual int getHeal() const { return healthIncrease; }

public:                                              // setters
  virtual void resetHealth() { health = maxHealth; }; // set his health back to 0
  virtual void decreaseHealth(int damage) { health -= damage; }
  virtual void increaseHealth(int healing) { health += healing; }
};

Enemy::Enemy()
{
  genRandomStats();
}

void Enemy::genRandomStats()
{
  attackDamage = abs(rand() % 25);
  attackSpecialDamage = abs(rand() % 25);
  healthIncrease = abs(rand() % 25);
  health = abs(rand() % 25);
  maxHealth = abs(rand() % 50);
}

// 0 if enemy heals, nonzero if he attacks
void Enemy::decideAction(Character *character)
{
   either attac, spec attack, or heal
  int decision = abs(rand() % 10);
  switch (decision)
  {//  if you see errors here, it's because of the ... so use an if-else stmt
  case 0 ... 3:
    attack(character);
    break;
  case 4 ... 8:
    heal(this);
    break;
  case 9:
    specialAttack(character);
    break;
  default:
    break;
  }
}

void Enemy::attack(Character *character)
{
  int damage = randomNumber(getAttackDamage()-2,getAttackDamage()+2);
  std::cout << "Enemy attacked with his shield toss and did " << damage << " damage." << std::endl;
  character->decreaseHealth(damage);
}

void Enemy::specialAttack(Character *character)
{
  int damage = randomNumber(getAttackDamage()-4,getAttackDamage()+4);
  std::cout << "Enemy attacked with his Hammer Combo and did " << damage << " damage." << std::endl;
  character->decreaseHealth(damage);
}

void Enemy::heal(Enemy *character)
{
  int healing = randomNumber(getHeal()-2,getHeal()+2);
  std::cout << "Enemy chose to heal and added " << getHeal() << " health." << std::endl;
  character->increaseHealth(getHeal());
}

int Enemy::randomNumber(int low, int high)
{
  srand(time(0));
  return (rand() % (high - low + 1));
}

