/* Maxim Tetuchin tetuhin@inbox.ru | st128993@student.spbu.ru
Assignment 3
*/
#include <gtest/gtest.h>
#include "Artillery.h"
#include "PowerCore.h"

//!  Artillery constructor test
TEST(ArtilleryTest, ConstructorTest) {
    PowerCore core(true);
    Artillery artillery("LEDENDA", 10, true, false, core, 100, 50);
    EXPECT_EQ(artillery.getRange(), 100);
    EXPECT_EQ(artillery.getAmmoCapacity(), 50);
}

//! Getters test
//! getRange test
TEST(ArtilleryTest, getRangeTest){
    PowerCore core(true);
    Artillery artillery("LEDENDA", 10, true, false, core, 100, 50);
    EXPECT_EQ(artillery.getRange(),100);
}

//! getAmmoCapacity test
TEST(ArtilleryTest, getAmmoCapacityTest){
    PowerCore core(true);
    Artillery artillery("LEDENDA", 10, true, false, core, 100, 50);
    EXPECT_EQ(artillery.getAmmoCapacity(),50);
}

//! Setters test
//! setRange test
TEST(ArtilleryTest, setRangeTest){
    PowerCore core(true);
    Artillery artillery("LEDENDA", 10, true, false, core, 100, 50);
    artillery.setRange(200);
    EXPECT_EQ(artillery.getRange(),200);
}

//! setAmmoCapacity test
TEST(ArtilleryTest, setAmmoCapacityTest){
    PowerCore core(true);
    Artillery artillery("LEDENDA", 10, true, false, core, 100, 50);
    artillery.setAmmoCapacity(200);
    EXPECT_EQ(artillery.getAmmoCapacity(),200);
}

//! methods test
//! fire method test
TEST(ArtilleryTest, FireTest){
    PowerCore core(true);
    Artillery artillery("LEDENDA", 10, true, false, core, 100, 50);
    std::ostringstream buffer; 
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(buffer.rdbuf());
    artillery.fire();
    std::cout.rdbuf(oldCoutBuffer);
    EXPECT_EQ(buffer.str(), "Artillery unit is firing!\n");

}
