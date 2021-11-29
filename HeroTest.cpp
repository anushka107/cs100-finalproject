#include "GameHandler.hpp"
#include <stdlib.h>
#include <time.h>
#include "gtest/gtest.h"


TEST(AquaMan, TestAquaPostiveAttack){
    Aqua_Man a;
    EXPECT_GE(a.getAttackDamage(),0);
}

TEST(CaptainAmerica, TestCaptainPostiveAttack){
    Captain_America c;
    EXPECT_GE(c.getAttackDamage(),0);
}

TEST(IronMan, TestIronPostiveAttack){
    Iron_Man i;
    EXPECT_GE(i.getAttackDamage(),0);
}

TEST(AquaMan, TestAquaPostiveSpecialAttack){
    Aqua_Man a;
    EXPECT_GE(a.getSpecialAttackDamage(),0);
}

TEST(CaptainAmerica, TestCaptainPostiveSpecialAttack){
    Captain_America c;
    EXPECT_GE(c.getSpecialAttackDamage(),0);
}

TEST(IronMan, TestIronPostiveSpecialAttack){
    Iron_Man i;
    EXPECT_GE(i.getSpecialAttackDamage(),0);
}

TEST(AquaMan, TestAquaPostiveHealAttack){
    Aqua_Man a;
    EXPECT_GE(a.getHeal(),0);
}

TEST(IronMan, TestIronPostiveHealAttack){
    Iron_Man i;
    EXPECT_GE(i.getHeal(),0);
}

TEST(CaptainAmerica, TestCaptainPostiveHealAttack){
    Captain_America c;
    EXPECT_GE(c.getHeal(),0);
}


TEST(TestRange, TestAquaAttackRange){
    Aqua_Man a;
    EXPECT_LE(a.getAttackDamage(),100);
}

TEST(TestRange, TestIronSpecialAttackRange){
    Iron_Man i;
    EXPECT_LE(i.getSpecialAttackDamage(),100);
}

TEST(TestRange, TestCaptainHealRange){
    Captain_America c;
    EXPECT_LE(c.getHeal(),100);
}

int main(int argc, char **argv) {
 srand(time(0));
 ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
                         

