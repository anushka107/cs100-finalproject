
#pragma  once

#include "character.hpp"

class Enemy : public Character {

public:
  Enemy() : Character() {
    generateRandomStats();
  }
  virtual void generateRandomStats() {
    this->setAttackDamage(abs(rand() % 25));
    this->setSpecialAttackDamage(abs(rand() % 25));
    this->setHeal(abs(rand() % 25));
    this->setHealth(abs(rand() % 25));
  }


  // 0 if enemy heals, nonzero if he attacks
  virtual void decideAction(Character * character) 
  {
      either attac, spec attack, or heal
      int decision = abs(rand() % 10);
      switch (decision)
      {// if you see errors here, it's because of the ... so use an if-else stmt
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
  virtual void attack(Character* character){
      std::cout << "Enemy attacked with his shield toss and did " << getAttackDamage() << " damage." << std::endl;
      character->decreaseHealth(getAttackDamage());
  }
  virtual void specialAttack(Character* character){
      std::cout << "Enemy attacked with his Hammer Combo and did " <<
      getSpecialAttackDamage() << " damage." << std::endl;
      character->decreaseHealth(getSpecialAttackDamage());

  }
  virtual void heal(Character* character){
      std::cout << "Enemy chose to heal and added " <<
      getHeal() << " health." << std::endl;
      character->increaseHealth(getHeal());
  }
private:
  enum { // use to 
      ATTACK,
      SPEC_ATTACK,
      HEAL
  };
};

