#ifndef __AQUA_MAN__
#define __AQUA_MAN__

#include "character.hpp"
#include <iostream>
using namespace std;

class Aqua_Man : public Character {
public:

virtual void attack(Character* character){
     cout << "Aqua Man attacked with his water cannon  " << getAttackDamage() << " damage." << endl;
     character->decreaseHealth(getAttackDamage());
}
virtual void specialAttack(Character* character){
    cout << "Aqua Man attacked with his Trident and did " <<
    getSpecialAttackDamage() << " damage." << endl;
    character->decreaseHealth(getSpecialAttackDamage());
}
virtual void heal(Character* character){
    cout << "Aqua Man chose to heal and added " <<
    getHeal() << " health." << endl;
    character->increaseHealth(getHeal());
}
};

#endif
