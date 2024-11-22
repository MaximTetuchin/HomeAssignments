/* Maxim Tetuchin tetuhin@inbox.ru | st128993@student.spbu.ru
Assignment 3
*/
#include <gtest/gtest.h>
#include "Transformer.h"
#include "PowerCore.h"
#include "Status.h"

//! RobotStatus class test
TEST(RobotStatusTest, ConstructorAndGetStatus) {
    PowerCore core(true);
    Transformer transformer("Optimus", 100, true, false, core);
    EXPECT_EQ(transformer.getStatus(), "undefined");
}
TEST(RobotStatusTest, SetGetStatus) {
    PowerCore core(true);
    Transformer transformer("Optimus", 100, true, false, core);
    transformer.setStatus("Damaged");
    EXPECT_EQ(transformer.getStatus(), "Damaged");
}
//! Transformer class test
TEST(TransformerTest, ConstructorAndGetCallSign) {
    PowerCore core(true);
    Transformer transformer("Optimus", 100, true, false, core);
    EXPECT_EQ(transformer.getCallSign(), "Optimus");
}

TEST(TransformerTest, ConstructorAndGetMoveSpeed) {
    PowerCore core(true);
    Transformer transformer("Optimus", 100, true, false, core);
    EXPECT_EQ(transformer.getMoveSpeed(), 100);
}

TEST(TransformerTest, ConstructorAndGetIsGunEquiped) {
    PowerCore core(true);
    Transformer transformer("Optimus", 100, true, false, core);
    EXPECT_TRUE(transformer.getIsGunEquiped());
}

TEST(TransformerTest, ConstructorAndGetIsTransformed) {
    PowerCore core(true);
    Transformer transformer("Optimus", 100, true, false, core);
    EXPECT_FALSE(transformer.getIsTransformed());
}

TEST(TransformerTest, ConstructorAndGetCoreStatus) {
    PowerCore core(true);
    Transformer transformer("Optimus", 100, true, false, core);
    EXPECT_TRUE(transformer.getCoreStatus());
}

//! Setters test
TEST(TransformerTest, SetGetCallSign) {
    PowerCore core(true);
    Transformer transformer("Optimus", 100, true, false, core);
    transformer.setCallSign("Megatron");
    EXPECT_EQ(transformer.getCallSign(), "Megatron");
}

TEST(TransformerTest, SetGetMoveSpeed) {
    PowerCore core(true);
    Transformer transformer("Optimus", 100, true, false, core);
    transformer.setMoveSpeed(150);
    EXPECT_EQ(transformer.getMoveSpeed(), 150);
}

TEST(TransformerTest, SetGetIsGunEquiped) {
    PowerCore core(true);
    Transformer transformer("Optimus", 100, true, false, core);
    transformer.setIsGunEquiped(false);
    EXPECT_FALSE(transformer.getIsGunEquiped());
}

TEST(TransformerTest, SetGetIsTransformed) {
    PowerCore core(true);
    Transformer transformer("Optimus", 100, true, false, core);
    transformer.setIsTransformed(true);
    EXPECT_TRUE(transformer.getIsTransformed());
}

TEST(TransformerTest, ChangeStatusTest) {
    PowerCore core(false);
    core.changeStatus();
    Transformer transformer("Optimus", 100, true, false, core);
    EXPECT_TRUE(transformer.getCoreStatus());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
