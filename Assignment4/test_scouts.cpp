/* Maxim Tetuchin tetuhin@inbox.ru | st128993@student.spbu.ru
Assignment 4
*/
#include <gtest/gtest.h>
#include "Scouts.h"
#include "PowerCore.h"

//! ScoutsTest cinstructor test
TEST(ScoutsTest, ConstructorTest)
{
    PowerCore core(true);
    Scouts scout("LEDENDA", 10, true, false, core, 100, 50);
    EXPECT_EQ(scout.getSensorRange(), 50);
    EXPECT_EQ(scout.getStealthLevel(), 100);
}

//! Getters test
//! getStealthLevel test
TEST(ScoutsTest, getStealthLevelTest)
{
    PowerCore core(true);
    Scouts scout("LEDENDA", 10, true, false, core, 100, 50);
    EXPECT_EQ(scout.getStealthLevel(),100);
}

//! getSensorRange test
TEST(ScoutsTest, getSensorRangeTest)
{
    PowerCore core(true);
    Scouts scout("LEDENDA", 10, true, false, core, 100, 50);
    EXPECT_EQ(scout.getSensorRange(),50);
}

//! Setters test
//! setRange test
TEST(ScoutsTest, setStealthTest)
{
    PowerCore core(true);
    Scouts scout("LEDENDA", 10, true, false, core, 100, 50);
    scout.setStealthLevel(200);
    EXPECT_EQ(scout.getStealthLevel(),200);
}

//! setSensorRange test
TEST(ScoutsTest, setSensorRangeTest)
{
    PowerCore core(true);
    Scouts scout("LEDENDA", 10, true, false, core, 100, 50);
    scout.setSensorRange(200);
    EXPECT_EQ(scout.getSensorRange(),200);
}
//! method test
TEST(ScoutsTest, reconTest)
{
    PowerCore core(true);
    Scouts scout("LEDENDA", 10, true, false, core, 100, 50);
    std::ostringstream buffer;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(buffer.rdbuf());
    scout.performRecon();
    std::cout.rdbuf(oldCoutBuffer);
    EXPECT_EQ(buffer.str(), "Recon was performed.\n");
}

TEST(ScoutsConstructorTests, ConstructorWithAllParameters)
{
    PowerCore coreStatus(true);
    Scouts scout("Shadow", 60, true, false, coreStatus, 80, 300);

    EXPECT_EQ(scout.getCallSign(), "Shadow");
    EXPECT_EQ(scout.getMoveSpeed(), 60);
    EXPECT_TRUE(scout.getIsGunEquiped());
    EXPECT_FALSE(scout.getIsTransformed());
    EXPECT_TRUE(scout.getCoreStatus());
    EXPECT_EQ(scout.getStealthLevel(), 80);
    EXPECT_EQ(scout.getSensorRange(), 300);
}

TEST(ScoutsConstructorTests, ConstructorWithPartialParameters_NoSensorRange)
{
    PowerCore coreStatus(true);
    Scouts scout("Ghost", 55, false, true, coreStatus, 70);

    EXPECT_EQ(scout.getCallSign(), "Ghost");
    EXPECT_EQ(scout.getMoveSpeed(), 55);
    EXPECT_FALSE(scout.getIsGunEquiped());
    EXPECT_TRUE(scout.getIsTransformed());
    EXPECT_TRUE(scout.getCoreStatus());
    EXPECT_EQ(scout.getStealthLevel(), 70);
    EXPECT_EQ(scout.getSensorRange(), 0);  // Sensor range should default to 0
}

TEST(ScoutsConstructorTests, ConstructorWithMinimumParameters)
{
    Scouts scout("Recon", 40);

    EXPECT_EQ(scout.getCallSign(), "Recon");
    EXPECT_EQ(scout.getMoveSpeed(), 40);
    EXPECT_FALSE(scout.getIsGunEquiped());
    EXPECT_FALSE(scout.getIsTransformed());
    EXPECT_FALSE(scout.getCoreStatus());  // Assuming default PowerCore status is false
    EXPECT_EQ(scout.getStealthLevel(), 0);  // Stealth level should default to 0
    EXPECT_EQ(scout.getSensorRange(), 0);   // Sensor range should default to 0
}