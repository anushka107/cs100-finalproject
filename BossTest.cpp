#include "GameHandler.hpp" // includes the various classes, memory
#include <stdlib.h>
#include <time.h>
#include "gtest/gtest.h"

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

