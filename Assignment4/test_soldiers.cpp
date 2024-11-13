/* Maxim Tetuchin tetuhin@inbox.ru | st128993@student.spbu.ru
Assignment 4
*/
#include <gtest/gtest.h>
#include "Soldiers.h"
#include "PowerCore.h"

TEST(SoldiersTest, getArmorLevelTest)
{
    PowerCore core(true);
    Soldiers soldier("LEDENDA", 10, true, false, core, 100, 50);
    EXPECT_EQ(soldier.getArmorLevel(), 100);
}

TEST(SoldiersTest, getFirepowerTest)
{
    PowerCore core(true);
    Soldiers soldier("LEDENDA", 10, true, false, core, 100, 50);
    EXPECT_EQ(soldier.getFirepower(), 50);
}

TEST(SoldiersTest, setArmorLevelTest)
{
    PowerCore core(true);
    Soldiers soldier("LEDENDA", 10, true, false, core, 100, 50);
    soldier.setArmorLevel(10);
    EXPECT_EQ(soldier.getArmorLevel(), 10);
}

TEST(SoldiersTest, setFirepowerTest)
{
    PowerCore core(true);
    Soldiers soldier("LEDENDA", 10, true, false, core, 100, 50);
    soldier.setFirepower(10);
    EXPECT_EQ(soldier.getFirepower(), 10);
}

TEST(SoldiersTest, engageCombatTest)
{
    PowerCore core(true);
    Soldiers soldier("LEDENDA", 10, true, false, core, 100, 50);
    std::ostringstream buffer;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(buffer.rdbuf());
    soldier.engageCombat();
    std::cout.rdbuf(oldCoutBuffer);
    EXPECT_EQ(buffer.str(), "Soldier is engaging in combat!\n");
}

TEST(SoldiersConstructorTests, ConstructorWithAllParameters)
{
    PowerCore coreStatus(true);
    Soldiers soldier("Ironhide", 50, true, true, coreStatus, 80, 120);

    EXPECT_EQ(soldier.getCallSign(), "Ironhide");
    EXPECT_EQ(soldier.getMoveSpeed(), 50);
    EXPECT_TRUE(soldier.getIsGunEquiped());
    EXPECT_TRUE(soldier.getIsTransformed());
    EXPECT_TRUE(soldier.getCoreStatus());
    EXPECT_EQ(soldier.getArmorLevel(), 80);
    EXPECT_EQ(soldier.getFirepower(), 120);
}

TEST(SoldiersConstructorTests, ConstructorWithPartialParameters_NoFirepower)
{
    PowerCore coreStatus(true);
    Soldiers soldier("Ratchet", 40, true, false, coreStatus, 50);

    EXPECT_EQ(soldier.getCallSign(), "Ratchet");
    EXPECT_EQ(soldier.getMoveSpeed(), 40);
    EXPECT_TRUE(soldier.getIsGunEquiped());
    EXPECT_FALSE(soldier.getIsTransformed());
    EXPECT_TRUE(soldier.getCoreStatus());
    EXPECT_EQ(soldier.getArmorLevel(), 50);
    EXPECT_EQ(soldier.getFirepower(), 0);  // Firepower should default to 0
}

TEST(SoldiersConstructorTests, ConstructorWithMinimumParameters)
{
    Soldiers soldier("Bumblebee", 30);

    EXPECT_EQ(soldier.getCallSign(), "Bumblebee");
    EXPECT_EQ(soldier.getMoveSpeed(), 30);
    EXPECT_FALSE(soldier.getIsGunEquiped());
    EXPECT_FALSE(soldier.getIsTransformed());
    EXPECT_FALSE(soldier.getCoreStatus());  // Assuming default PowerCore status is false
    EXPECT_EQ(soldier.getArmorLevel(), 0);  // Armor level should default to 0
    EXPECT_EQ(soldier.getFirepower(), 0);   // Firepower should default to 0
}