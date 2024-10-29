/* Maxim Tetuchin tetuhin@inbox.ru | st128993@student.spbu.ru
Assignment 3
*/
#include <gtest/gtest.h>
#include "Scouts.h"
#include "PowerCore.h"

//! ScoutsTest cinstructor test
TEST(ScoutsTest, ConstructorTest) {
    PowerCore core(true);
    Scouts scout("LEDENDA", 10, true, false, core, 100, 50);
    EXPECT_EQ(scout.getSensorRange(), 50);
    EXPECT_EQ(scout.getStealthLevel(), 100);
}

//! Getters test
//! getStealthLevel test
TEST(ScoutsTest, getStealthLevelTest){
    PowerCore core(true);
    Scouts scout("LEDENDA", 10, true, false, core, 100, 50);
    EXPECT_EQ(scout.getStealthLevel(),100);
}

//! getSensorRange test
TEST(ScoutsTest, getSensorRangeTest){
    PowerCore core(true);
    Scouts scout("LEDENDA", 10, true, false, core, 100, 50);
    EXPECT_EQ(scout.getSensorRange(),50);
}

//! Setters test
//! setRange test
TEST(ScoutsTest, setStealthTest){
    PowerCore core(true);
    Scouts scout("LEDENDA", 10, true, false, core, 100, 50);
    scout.setStealthLevel(200);
    EXPECT_EQ(scout.getStealthLevel(),200);
}

//! setSensorRange test
TEST(ScoutsTest, setSensorRangeTest){
    PowerCore core(true);
    Scouts scout("LEDENDA", 10, true, false, core, 100, 50);
    scout.setSensorRange(200);
    EXPECT_EQ(scout.getSensorRange(),200);
}
//! method test
TEST(ScoutsTest, reconTest){
    PowerCore core(true);
    Scouts scout("LEDENDA", 10, true, false, core, 100, 50);
    std::ostringstream buffer; 
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(buffer.rdbuf());
    scout.performRecon();
    std::cout.rdbuf(oldCoutBuffer);
    EXPECT_EQ(buffer.str(), "Recon was performed.\n");
}
