#ifndef __IRON_MAN__
#define __IRON_MAN__

#include "character.hpp"
#include <iostream>
using namespace std;

class Iron_Man : public Character {
public:
 virtual void attack(Character* character){
     cout << "Iron Man attacked with his lasers and did " << getAttackDamage() << " damage." << endl;
     character->decreaseHealth(getAttackDamage());
 }
  virtual void specialAttack(Character* character){
    cout << "Iron Man attacked with his Hand Cannon and did " <<
    getSpecialAttackDamage() << " damage." << endl;
    character->decreaseHealth(getSpecialAttackDamage());
}
  virtual void heal(Character* character){
    cout << "Iron Man chose to heal and added " <<
    getHeal() << " health." << endl;
    character->increaseHealth(getHeal());
}
};

#endif
