#ifndef__CAPTAIN_AMERICA__
#define__CAPTAIN_AMERICA__

#include “character.hpp”

Class Captain_America : public Character {
public:
  virtual void attack(Character* character){
    cout << "Captain America attacked with his shield toss and did " << getAttackDamage() << " damage." << endl;
    character->decreaseHealth(getAttackDamage());
}
  virtual void specialAttack(Character* character){
    cout << "Captain America attacked with his Hammer Combo and did " <<
    getSpecialAttackDamage() << " damage." << endl;
    character->decreaseHealth(getSpecialAttackDamage());
}
  virtual void heal(Character* character){
    cout << "Captain America chose to heal and added " <<
    getHeal() << " health." << endl;
    character->increaseHealth(getHeal());
}
};

