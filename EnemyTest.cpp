#include "GameHandler.hpp"
#include <stdlib.h>
#include <time.h>
#include "gtest/gtest.h"


TEST(EnemyCtor, TestPositiveAttack)
{
    GameHandler game;
    game.generateEnemy();
    EXPECT_LE(0, game.getEnemy()->getAttackDamage());
    EXPECT_GE(game.getEnemy()->getAttackDamage(),0);
}

TEST(EnemyCtor, TestPositiveSpecAttack)
{   GameHandler game;
    game.generateEnemy();
    EXPECT_LE(0, game.getEnemy()->getSpecialAttackDamage());
    EXPECT_GE(game.getEnemy()->getSpecialAttackDamage(),0);
}

TEST(EnemyCtor, TestPositiveHeal)
{
    GameHandler game;
    game.generateEnemy();
    EXPECT_LE(0, game.getEnemy()->getHeal());
    EXPECT_GE(game.getEnemy()->getHeal(),0);
}

TEST(EnemyCtor, TestMaxHealth)
{
    GameHandler game;
    game.generateEnemy();
    EXPECT_EQ(game.getEnemy()->getHealth(),game.getEnemy()->getMaxHealth());
}

TEST(EnemyHealthChanges, TestReset) {
    GameHandler game;
    game.generateEnemy();
    int oldHealth = game.getEnemy()->getHealth();
    game.getEnemy()->resetHealth();
    EXPECT_EQ(game.getEnemy()->getHealth(),game.getEnemy()->getMaxHealth());
}

GameHandler game;

TEST(Boss, TestNull)
{
    GameHandler game;
    EXPECT_EQ(nullptr,game.getBoss());
}

TEST(BossCtor, TestPositiveHealth)
{
    Boss boss;
    EXPECT_LE(0, boss.getHealth());
}

TEST(BossCtor, TestPositiveAttack)
{
    Boss boss;
    EXPECT_LE(0, boss.getAttackDamage());
}

TEST(BossEnemyCtor, TestPositiveSpecAttack)
{
    Boss boss;
    EXPECT_LE(0, boss.getSpecialAttackDamage());
}

TEST(BossCtor, TestPositiveHeal)
{
    Boss boss;
    EXPECT_LE(0, boss.getHeal());
}


int main(int argc, char **argv) {
  srand(time(0));
 ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

