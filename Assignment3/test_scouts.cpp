/* Maxim Tetuchin tetuhin@inbox.ru | st128993@student.spbu.ru
Assignment 3
*/
#include <gtest/gtest.h>
#include "Scouts.h"
#include "PowerCore.h"

//! Тестируем конструктор ScoutsTest
TEST(ScoutsTest, ConstructorTest) {
    PowerCore core(true);
    Scouts scout("LEDENDA", 10, true, false, core, 100, 50);
    EXPECT_EQ(scout.getSensorRange(), 50);
    EXPECT_EQ(scout.getStealthLevel(), 100);
}

//! Тестируем геттеры
//! Тестируем getStealthLevel
TEST(ScoutsTest, getStealthLevelTest){
    PowerCore core(true);
    Scouts scout("LEDENDA", 10, true, false, core, 100, 50);
    EXPECT_EQ(scout.getStealthLevel(),100);
}

//! Тестируем getSensorRange
TEST(ScoutsTest, getSensorRangeTest){
    PowerCore core(true);
    Scouts scout("LEDENDA", 10, true, false, core, 100, 50);
    EXPECT_EQ(scout.getSensorRange(),50);
}

//! Тестируем сеттеры
//! Тестируем setRangeTest
TEST(ScoutsTest, setStealthTest){
    PowerCore core(true);
    Scouts scout("LEDENDA", 10, true, false, core, 100, 50);
    scout.setStealthLevel(200);
    EXPECT_EQ(scout.getStealthLevel(),200);
}

//! Тестируем setSensorRange
TEST(ScoutsTest, setSensorRangeTest){
    PowerCore core(true);
    Scouts scout("LEDENDA", 10, true, false, core, 100, 50);
    scout.setSensorRange(200);
    EXPECT_EQ(scout.getSensorRange(),200);
}
//! Тест метода
TEST(ScoutsTest, reconTest){
    PowerCore core(true);
    Scouts scout("LEDENDA", 10, true, false, core, 100, 50);
    std::ostringstream buffer; //! Работать будем через буфер
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(buffer.rdbuf());
    scout.performRecon();
    std::cout.rdbuf(oldCoutBuffer);
    EXPECT_EQ(buffer.str(), "Recon was performed.\n");
}
