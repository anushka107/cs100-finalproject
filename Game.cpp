#include "GameHandler.hpp"
int main()
{
    cout << "In our text-based game we will have three characters Aqua Man, Iron Man, and Captain America. The character you choose will have to face two battles." << endl << 
        "The first battle will consist of a soldier of Thanos. If you have successfully beaten the soldier you will fight the boss, Thanos himself!!!" << endl << 
        "Once you have arrived in battle, you will have the choice of the following: " << endl <<
        "BasicAttack" << endl << " SpecialAttack( YOU ONLY ARE ALLOWED THREE OF THIS ATTACK PER BATTLE)" << endl << "Heal" << endl << "Quit the game( Please don't rage quit :). I assure you you will have a blast )"
        << endl << "What are you waiting for? Go on an fight your journey!"
        
    GameHandler game;
    game.chooseHero();

    /* The Grunt Fight */
    game.generateEnemy();
    while (!game.isFightOver(game.getHero(), game.getEnemy()))
    {
        game.chooseAction();
        if (game.getEnemy()->getHealth() <= 0)
        {
            cout << game.getHero()->name << " defeated the grunt. Now for the boss!\n";
            break;
        }

        game.getEnemy()->decideAction(game.getHero());
        if (game.getHero()->getHealth() <= 0)
        {
            cout << "Congrats on losing to a grunt. Try again next time.\n";
            return 0;
        }

    }

    /* The Boss Fight */

    game.chooseBoss();
    while (!game.isFightOver(game.getHero(), game.getBoss()))
    {

        game.chooseAction();
        if (game.getBoss()->getHealth() <= 0)
        {
            cout << game.getHero()->name << " defeated Thanos! You have saved Earth from exploding \n";
            return 0;
        }
        game.getBoss()->decideAction(game.getHero());
        if (game.getHero()->getHealth() <= 0)
        {
            cout << "Thanos snapped ya'. Try again in the next timeline.\n";
            return 0;
        }
    }

        return 0;
}

