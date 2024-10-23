/* Maxim Tetuchin tetuhin@inbox.ru | st128993@student.spbu.ru
Assignment 3
*/
#include <gtest/gtest.h>
#include "Artillery.h"
#include "PowerCore.h"

//! Тестируем конструктор Artillery
TEST(ArtilleryTest, ConstructorTest) {
    PowerCore core(true);
    Artillery artillery("LEDENDA", 10, true, false, core, 100, 50);
    EXPECT_EQ(artillery.getRange(), 100);
    EXPECT_EQ(artillery.getAmmoCapacity(), 50);
}

//! Тестируем геттеры
//! Тестируем getRange
TEST(ArtilleryTest, getRangeTest){
    PowerCore core(true);
    Artillery artillery("LEDENDA", 10, true, false, core, 100, 50);
    EXPECT_EQ(artillery.getRange(),100);
}

//! Тестируем getAmmoCapacity
TEST(ArtilleryTest, getAmmoCapacityTest){
    PowerCore core(true);
    Artillery artillery("LEDENDA", 10, true, false, core, 100, 50);
    EXPECT_EQ(artillery.getAmmoCapacity(),50);
}

//! Тестируем сеттеры
//! Тестируем setRangeTest
TEST(ArtilleryTest, setRangeTest){
    PowerCore core(true);
    Artillery artillery("LEDENDA", 10, true, false, core, 100, 50);
    artillery.setRange(200);
    EXPECT_EQ(artillery.getRange(),200);
}

//! Тестируем setAmmoCapacity
TEST(ArtilleryTest, setAmmoCapacityTest){
    PowerCore core(true);
    Artillery artillery("LEDENDA", 10, true, false, core, 100, 50);
    artillery.setAmmoCapacity(200);
    EXPECT_EQ(artillery.getAmmoCapacity(),200);
}

//! Тестируем методы
//! Тестируем fire
TEST(ArtilleryTest, FireTest){
    PowerCore core(true);
    Artillery artillery("LEDENDA", 10, true, false, core, 100, 50);
    std::ostringstream buffer; //! Работать будем через буфер
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(buffer.rdbuf());
    artillery.fire();
    std::cout.rdbuf(oldCoutBuffer);
    EXPECT_EQ(buffer.str(), "Artillery unit is firing!\n");

}
