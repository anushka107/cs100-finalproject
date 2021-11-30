#include "GameHandler.hpp"
int main()
{
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
            cout << game.getHero()->name << " defeated Thanos!\n";
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

