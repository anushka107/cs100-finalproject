#include "character.hpp"
#include "Aqua_Man.hpp"
#include "Iron_Man.hpp"
#include "Captain_America.hpp"
#include <stdlib.h>
#include <time.h>
#include "gtest/gtest.h"

Captain_America c;
Iron_Man i;
Aqua_Man a;

TEST(AttackDamageTest, TestPositiveSetAttackDamage) {
  c.randomAttack();
  c.randomSpecialAttack();
  c.setHealth(200);
  c.randomHeal();
  EXPECT_LE(c.getAttackDamage(), 40);
  EXPECT_GE(c.getAttackDamage(), 25);
  c.setAttackDamage(26);
  EXPECT_EQ(c.getAttackDamage(),26);
}

TEST(AttackDamageTest, TestNegativeSetAttackDamage) {
  i.randomAttack();
  i.randomSpecialAttack();
  i.setHealth(200);
  i.randomHeal();
  EXPECT_LE(i.getAttackDamage(), 40);
  EXPECT_GE(i.getAttackDamage(), 25);
  i.setAttackDamage(-1);
  EXPECT_EQ(i.getAttackDamage(),-1);
}

TEST(AttackDamageTest, TestZeroSetAttackDamage) {
  a.randomAttack();
  a.randomSpecialAttack();
  a.setHealth(200);
  a.randomHeal();
  EXPECT_LE(a.getAttackDamage(), 40);
  EXPECT_GE(a.getAttackDamage(), 25);
  a.setAttackDamage(0);
  EXPECT_EQ(a.getAttackDamage(),0);
}

TEST(SpecialAttackDamageTest, TestPositiveSetSpecialDamage) {
  c.randomAttack();
  c.randomSpecialAttack();
  c.setHealth(200);
  c.randomHeal();
  EXPECT_LE(c.getSpecialAttackDamage(), 75);
  EXPECT_GE(c.getSpecialAttackDamage(), 50);
  c.setSpecialAttackDamage(56);
  EXPECT_EQ(c.getSpecialAttackDamage(),56);
}

TEST(SpecialAttackDamageTest, TestNegativeSetSpecialDamage) {
  i.randomAttack();
  i.randomSpecialAttack();
  i.setHealth(200);
  i.randomHeal();
  EXPECT_LE(i.getSpecialAttackDamage(), 75);
                                                                   
TEST(SpecialAttackDamageTest, TestZeroSetSpecialDamage) {
  a.randomAttack();
  a.randomSpecialAttack();
  a.setHealth(200);
  a.randomHeal();
  EXPECT_LE(a.getSpecialAttackDamage(), 75);
  EXPECT_GE(a.getSpecialAttackDamage(), 50);
  a.setSpecialAttackDamage(0);
  EXPECT_EQ(a.getSpecialAttackDamage(),0);
}

TEST(HealTest, TestSetPositiveHeal) {
  c.randomAttack();
  c.randomSpecialAttack();
  c.setHealth(200);
  c.randomHeal();
  EXPECT_LE(c.getHeal(), 25);
  EXPECT_GE(c.getHeal(), 15);
  c.setHeal(0);
  EXPECT_EQ(c.getHeal(),0);
}

TEST(HealTest, TestSetNegativeHeal) {
  i.randomAttack();
  i.randomSpecialAttack();
  i.setHealth(200);
  i.randomHeal();
  EXPECT_LE(i.getHeal(), 25);
  EXPECT_GE(i.getHeal(), 15);
  i.setHeal(-15);
  EXPECT_EQ(i.getHeal(),-15);
}

TEST(HealTest, TestSetZeroHeal) {
  a.randomAttack();
  a.randomSpecialAttack();
  a.setHealth(200);
  a.randomHeal();
  EXPECT_LE(a.getHeal(), 25);
  EXPECT_GE(a.getHeal(), 15);
  a.setHeal(23);
  EXPECT_EQ(a.getHeal(),23);
}

int main(int argc, char **argv) {
  srand(time(0));
 ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
