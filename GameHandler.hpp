
#pragma once

#include "Aqua_Man.hpp"
#include "Boss.hpp"
#include "Captain_America.hpp"
#include "Enemy.hpp"
#include "Iron_Man.hpp"
#include <iostream>
using namespace std;
/**
 *  *  * @brief factory for the game objects
 *   *   * 
 *    *    */
class GameHandler
{
private:
    /* data */
    Character *current_character;
    Boss *current_boss;
    Enemy *current_enemy;
    enum
    {   
        HERO_CHOICE_AQUA_MAN = 1,
        HERO_CHOICE_IRON_MAN = 2,
        HERO_CHOICE_CAPTAIN_AMERICA = 3
    };
    enum
    {   
        BATTLE_CHOICE_ATTACK = 1,
        BATTLE_CHOICE_SPECIAL_ATTACK,
        BATTLE_CHOICE_HEAL,
        BATTLE_CHOICE_RAGE_QUIT
    };

public:
    GameHandler(/* args */);
    ~GameHandler();
    void chooseHero();
    void chooseBoss();
    void generateEnemy();
    void generateBoss();
    void chooseAction(); 
    Character *getHero();
    Enemy *getEnemy();
    Boss *getBoss();
    bool isFightOver(Character *, Enemy *);
 
 };

GameHandler::GameHandler(/* args */)
{   
    current_boss = nullptr;
    current_character = nullptr;
    current_enemy = nullptr;
}

GameHandler::~GameHandler()
{      
       delete current_character;
    delete current_enemy;
}

void GameHandler::chooseHero()
{
    cout << "\t\tWELCOME TO HERO'S JOURNEY        " << endl;
    cout << "Please type in a number to chose your character." << endl;
    cout << "Type 1 for Aqua Man, Type 2 for Iron Man, Type 3 for Captain America." << endl;

    int userInput{-1};
    cin >> userInput;

    while (userInput != HERO_CHOICE_AQUA_MAN && userInput != HERO_CHOICE_CAPTAIN_AMERICA && userInput != HERO_CHOICE_IRON_MAN)

    {
        cout << "Invalid option. Please enter 1 for Captain America, Type 2 for Iron Man, Type 3 for Aqua Man." << endl;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
        }
        cin >> userInput;
    }
    switch (userInput)
    {
    case HERO_CHOICE_AQUA_MAN:
    {
        cout << "\tYou have chosen Aqua Man" << endl;
        Character *cptr{new Aqua_Man()};
        current_character = cptr;
        break;
    }
    case HERO_CHOICE_CAPTAIN_AMERICA:
    {
        cout << "\tYou have chosen Captain America." << endl;
        Character *cptr{new Captain_America()};
        current_character = cptr;
        break;
    }
    case HERO_CHOICE_IRON_MAN:
    {
        cout << "\tYou have chosen Iron Man." << endl;
        Character *cptr{new Iron_Man()};
        current_character = cptr;
        break;
    }
    default:
    {
        cout << "\tYou have chosen to Rage Quit.\n";
        current_character = nullptr;
    }
    }
}

void GameHandler::chooseBoss()
{
    cout << "\nThanos is putting his Infinite Gauntlet.\n";
    cout << current_character->name << " takes the moment to catch his breath. Health reset.\n";
    cout << std::endl;
    current_character->resetHealth();
    current_boss = new Boss();

    delete current_enemy;
    current_enemy = current_boss;
}

void GameHandler::generateEnemy()
{
    current_enemy = new Enemy();
}

void GameHandler::chooseAction()
{
    cout << "Now it is time for you to chose your behavior for your character in preparation for battle" << endl;
    cout << "Type 1 for attack, 2 for Special attack, 3 for Heal, or 4 to Quit the game" << endl;
    int battleChoice{-1};
    cin >> battleChoice;
    while (battleChoice != 1 && battleChoice != 2 && battleChoice != 3 && battleChoice != 4)
    {
        cout << "Invalid option. Please type 1 for attack, 2 for Special attack, 3 for Heal, or 4 to Quit the game" << endl;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
        }
        cin >> battleChoice;
    }
    cout << endl;
    if (battleChoice == 1)
    {
        current_character->attack(current_enemy);
    }
    else if (battleChoice == 2)
    {
        current_character->specialAttack(current_enemy);
    }
    else if (battleChoice == 3)
    {
        current_character->heal(current_character);
    }
    else if (battleChoice == 4)
    {
        cout << "You have quit the game\n";
        exit(0);
    }
}

Character *GameHandler::getHero()
{
    return current_character;
}
Enemy *GameHandler::getEnemy()
{
    return current_enemy;
}
Boss *GameHandler::getBoss()
{
    return current_boss;
}

bool GameHandler::isFightOver(Character *hero, Enemy *grunt)
{
    if (hero->getHealth() <= 0)
    {
        cout << "\tYou have lost to a grunt\n";
    }
    else if (grunt->getHealth() <= 0)
    {
        cout << "\tYou have beaten the grunt\n\n";
    }
    return false;
}

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
