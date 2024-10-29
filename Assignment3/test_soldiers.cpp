/* Maxim Tetuchin tetuhin@inbox.ru | st128993@student.spbu.ru
Assignment 3
*/
#include <gtest/gtest.h>
#include "Soldiers.h"
#include "PowerCore.h"
TEST(SoldiersTest, ConstructorTest) {
    PowerCore core(true);
    Soldiers soldier("LEDENDA", 10, true, false, core, 100, 50);
    EXPECT_EQ(soldier.getArmorLevel(), 100);
    EXPECT_EQ(soldier.getFirepower(), 50);
}

TEST(SoldiersTest, getArmorLevelTest) {
    PowerCore core(true);
    Soldiers soldier("LEDENDA", 10, true, false, core, 100, 50);
    EXPECT_EQ(soldier.getArmorLevel(), 100);
}

TEST(SoldiersTest, getFirepowerTest) {
    PowerCore core(true);
    Soldiers soldier("LEDENDA", 10, true, false, core, 100, 50);
    EXPECT_EQ(soldier.getFirepower(), 50);
}

TEST(SoldiersTest, setArmorLevelTest) {
    PowerCore core(true);
    Soldiers soldier("LEDENDA", 10, true, false, core, 100, 50);
    soldier.setArmorLevel(10);
    EXPECT_EQ(soldier.getArmorLevel(), 10);
}

TEST(SoldiersTest, setFirepowerTest) {
    PowerCore core(true);
    Soldiers soldier("LEDENDA", 10, true, false, core, 100, 50);
    soldier.setFirepower(10);
    EXPECT_EQ(soldier.getFirepower(), 10);
}

TEST(SoldiersTest, engageCombatTest) {
    PowerCore core(true);
    Soldiers soldier("LEDENDA", 10, true, false, core, 100, 50);
    std::ostringstream buffer;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(buffer.rdbuf());
    soldier.engageCombat();
    std::cout.rdbuf(oldCoutBuffer);
    EXPECT_EQ(buffer.str(), "Soldier is engaging in combat!\n");
}
