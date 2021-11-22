#include "enemy.hpp"
#include <string>

class Boss : public Enemy
{
private:
    std::string name;
public:
    Boss(const std::string & bossName) {
      name = bossName;
      generateRandomStats();
    }
    ~Boss();

    std::string getName() const {
      return name;
    }

    virtual void generateRandomStats() {
      this->setAttackDamage(abs(rand() % 50));
      this->setSpecialAttackDamage(50 + abs((rand() % 50)));
      this->setHeal(abs(rand() % 100));
      this->setHealth(abs(rand() % 100));
    }

    virtual void decideAction(Character * character) 
    {
     // either attac, spec attack, or heal
      int decision = abs(rand() % 10);
      switch (decision)
      {// if you see errors here, it's because of the ... so use an if-else stmt
      case 0 ... 2:
        attack(character);
        break;
      case 4 ... 7:
        heal(this);
        break;
      case 8 ... 9: // 20 % of time, boss does special
        specialAttack(character);
        break;
      default:
        break;
      }
    }
    virtual void attack(Character* character){
        std::cout << getName() << " attacked with his <ATTACK> and did " 
                  << getAttackDamage() << " damage." << std::endl;
        character->decreaseHealth(getAttackDamage());
    }
    virtual void specialAttack(Character* character){
        std::cout << getName() << " attacked with his <SPEC ATTACK> and did " <<
        getSpecialAttackDamage() << " damage." << std::endl;
        character->decreaseHealth(getSpecialAttackDamage());

    }
    virtual void heal(Character* character){
        std::cout << getName() << " chose to heal and added " <<
        getHeal() << " health." << std::endl;
        character->increaseHealth(getHeal());
    }
};
