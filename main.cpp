#include "character.hpp"
#include "Aqua_Man.hpp"
#include "Iron_Man.hpp"
#include "Captain_America.hpp"
#include "Boss.hpp"
#include "enemy.hpp"

int main()
{
    //code that selects for what type of character you want
     Character * player;
     player = new Aqua_Man();
    // generate a bunch of enemies
  // 1. first battle 
     Enemy * enemy = new Enemy();
     int count =1;
      while(player->getHealth() > 0 && enemy->getHealth() > 0) {
        // who goes first?
       // ask player for his or her move
       // then the enemy chooses its own attack
      	 player->attack(enemy);
  
     // should check if enemy is dead before you let him attack
     if (enemy->getHealth() > 0) {
        enemy->decideAction(player);
                                                                              
     }
}

    // 2. reset the player's health!

    // 3. generate the boss by using 
 //    you don't your bosses to all have the same stats
    // so randomize, and use a non default constructor
    int rattack = 25 + rand() % 50;// bw 25 and 74
    int rspecattack = 50 + rand() % 75; // bw 50 and 124
    int rheal = 40 + rand() % 50;
    int rhealth = player->getHealth() - 10;// 10 less health
    Boss * boss = new Boss();
   // special constructor for boss with random inputs?
  while(player->getHealth() > 0 && boss->getHealth() > 0)
    {
        // player choose his/her action
        // then have boss decide his own action
                 }    
       
        //
             return EXIT_SUCCESS;
     }                        
        
