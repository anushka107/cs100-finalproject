#include "character.hpp"

class Enemy : public Character {

public:
    Enemy() : Character(10,5,5,20) {}

   // 0 if enemy heals, nonzero if he attacks
    void decideAction(Character * character) 
    {
     //   either attack, spec attack, or heal
        int decision = rand() % 3;
        switch (decision)
        {
        case ATTACK:
            attack(character);
            break;
        case SPEC_ATTACK:
            specialAttack(character);
            break;
        case HEAL:
         //   setHealth(getHealth()+more_health);
            heal(this);
            break;
        default:
            break;
        }
    }
    void attack(Character* character){
        std::cout << "Enemy attacked with his shield toss and did " << getAttackDamage() << " damage." << std::endl;
        character->decreaseHealth(getAttackDamage());
    }
    void specialAttack(Character* character){
        std::cout << "Enemy attacked with his Hammer Combo and did " <<
        getSpecialAttackDamage() << " damage." << std::endl;
        character->decreaseHealth(getSpecialAttackDamage());

    }
    void heal(Character* character){
        std::cout << "Enemy chose to heal and added " <<
        getHeal() << " health." << std::endl;
        character->increaseHealth(getHeal());
    }
private:
    enum { 
        ATTACK
        SPEC_ATTACK,
        HEAL
    };
};


