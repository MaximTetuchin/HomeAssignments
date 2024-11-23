/* Maxim Tetuchin tetuhin@inbox.ru | st128993@student.spbu.ru
Assignment 5
*/
#include <gtest/gtest.h>
#include "Artillery.h"
#include "PowerCore.h"

//! Getters test
//! getRange test
TEST(ArtilleryTest, getRangeTest)
{
    PowerCore core(true);
    Artillery artillery("LEDENDA", 10, true, false, core, 100, 50);
    EXPECT_EQ(artillery.getRange(),100);
}

//! getAmmoCapacity test
TEST(ArtilleryTest, getAmmoCapacityTest)
{
    PowerCore core(true);
    Artillery artillery("LEDENDA", 10, true, false, core, 100, 50);
    EXPECT_EQ(artillery.getAmmoCapacity(),50);
}

//! Setters test
//! setRange test
TEST(ArtilleryTest, setRangeTest)
{
    PowerCore core(true);
    Artillery artillery("LEDENDA", 10, true, false, core, 100, 50);
    artillery.setRange(200);
    EXPECT_EQ(artillery.getRange(),200);
}

//! setAmmoCapacity test
TEST(ArtilleryTest, setAmmoCapacityTest)
{
    PowerCore core(true);
    Artillery artillery("LEDENDA", 10, true, false, core, 100, 50);
    artillery.setAmmoCapacity(200);
    EXPECT_EQ(artillery.getAmmoCapacity(),200);
}

//! methods test
//! fire method test
TEST(ArtilleryTest, FireTest)
{
    PowerCore core(true);
    Artillery artillery("LEDENDA", 10, true, false, core, 100, 50);
    std::ostringstream buffer;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(buffer.rdbuf());
    artillery.fire();
    std::cout.rdbuf(oldCoutBuffer);
    EXPECT_EQ(buffer.str(), "Artillery unit is firing!\n");

}

TEST(ArtilleryConstructorTests, ConstructorWithAllParameters)
{
    PowerCore coreStatus(true);
    Artillery artillery("Thunder", 30, true, true, coreStatus, 500, 100);

    EXPECT_EQ(artillery.getCallSign(), "Thunder");
    EXPECT_EQ(artillery.getMoveSpeed(), 30);
    EXPECT_TRUE(artillery.getIsGunEquiped());
    EXPECT_TRUE(artillery.getIsTransformed());
    EXPECT_TRUE(artillery.getCoreStatus());
    EXPECT_EQ(artillery.getRange(), 500);
    EXPECT_EQ(artillery.getAmmoCapacity(), 100);
}

TEST(ArtilleryConstructorTests, ConstructorWithPartialParameters_NoAmmoCapacity)
{
    PowerCore coreStatus(false);
    Artillery artillery("Blast", 25, true, false, coreStatus, 300);

    EXPECT_EQ(artillery.getCallSign(), "Blast");
    EXPECT_EQ(artillery.getMoveSpeed(), 25);
    EXPECT_TRUE(artillery.getIsGunEquiped());
    EXPECT_FALSE(artillery.getIsTransformed());
    EXPECT_FALSE(artillery.getCoreStatus());
    EXPECT_EQ(artillery.getRange(), 300);
    EXPECT_EQ(artillery.getAmmoCapacity(), 0);  // Ammo capacity should default to 0
}

TEST(ArtilleryConstructorTests, ConstructorWithMinimumParameters)
{
    Artillery artillery("Cannon", 20);

    EXPECT_EQ(artillery.getCallSign(), "Cannon");
    EXPECT_EQ(artillery.getMoveSpeed(), 20);
    EXPECT_FALSE(artillery.getIsGunEquiped());
    EXPECT_FALSE(artillery.getIsTransformed());
    EXPECT_FALSE(artillery.getCoreStatus());  // Assuming default PowerCore status is false
    EXPECT_EQ(artillery.getRange(), 0);  // Range should default to 0
    EXPECT_EQ(artillery.getAmmoCapacity(), 0);  // Ammo capacity should default to 0
}