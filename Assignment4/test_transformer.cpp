/* Maxim Tetuchin tetuhin@inbox.ru | st128993@student.spbu.ru
Assignment 4
*/
#include <gtest/gtest.h>
#include "Transformer.h"
#include "PowerCore.h"
#include "Status.h"

//! RobotStatus class test
TEST(RobotStatusTest, ConstructorAndGetStatus)
{
    RobotStatus status("Operational");
    EXPECT_EQ(status.getStatus(), "Operational");
}

TEST(RobotStatusTest, SetGetStatus)
{
    RobotStatus status("Operational");
    status.setStatus("Damaged");
    EXPECT_EQ(status.getStatus(), "Damaged");
}

//! Transformer class test
TEST(TransformerTest, ConstructorAndGetCallSign)
{
    PowerCore core(true);
    RobotStatus status("Operational");
    Transformer transformer("Optimus", 100, true, false, core);
    EXPECT_EQ(transformer.getCallSign(), "Optimus");
}

TEST(TransformerTest, ConstructorAndGetMoveSpeed)
{
    PowerCore core(true);
    RobotStatus status("Operational");
    Transformer transformer("Optimus", 100, true, false, core);
    EXPECT_EQ(transformer.getMoveSpeed(), 100);
}

TEST(TransformerTest, ConstructorAndGetIsGunEquiped)
{
    PowerCore core(true);
    RobotStatus status("Operational");
    Transformer transformer("Optimus", 100, true, false, core);
    EXPECT_TRUE(transformer.getIsGunEquiped());
}

TEST(TransformerTest, ConstructorAndGetIsTransformed)
{
    PowerCore core(true);
    RobotStatus status("Operational");
    Transformer transformer("Optimus", 100, true, false, core);
    EXPECT_FALSE(transformer.getIsTransformed());
}

TEST(TransformerTest, ConstructorAndGetCoreStatus)
{
    PowerCore core(true);
    RobotStatus status("Operational");
    Transformer transformer("Optimus", 100, true, false, core);
    EXPECT_TRUE(transformer.getCoreStatus());
}

//! Setters test
TEST(TransformerTest, SetGetCallSign)
{
    PowerCore core(true);
    RobotStatus status("Operational");
    Transformer transformer("Optimus", 100, true, false, core);
    transformer.setCallSign("Megatron");
    EXPECT_EQ(transformer.getCallSign(), "Megatron");
}

TEST(TransformerTest, SetGetMoveSpeed)
{
    PowerCore core(true);
    RobotStatus status("Operational");
    Transformer transformer("Optimus", 100, true, false, core);
    transformer.setMoveSpeed(150);
    EXPECT_EQ(transformer.getMoveSpeed(), 150);
}

TEST(TransformerTest, SetGetIsGunEquiped)
{
    PowerCore core(true);
    RobotStatus status("Operational");
    Transformer transformer("Optimus", 100, true, false, core);
    transformer.setIsGunEquiped(false);
    EXPECT_FALSE(transformer.getIsGunEquiped());
}

TEST(TransformerTest, SetGetIsTransformed)
{
    PowerCore core(true);
    RobotStatus status("Operational");
    Transformer transformer("Optimus", 100, true, false, core);
    transformer.setIsTransformed(true);
    EXPECT_TRUE(transformer.getIsTransformed());
}

TEST(TransformerTest, GetStatus)
{
    PowerCore core(true);
    RobotStatus status("Operational");
    Transformer transformer("Optimus", 100, true, false, core);
    EXPECT_EQ(transformer.getStatus(status), "Operational");
}

TEST(TransformerTest, changeStatusTest)
{
    PowerCore core(false);
    core.changeStatus();
    RobotStatus status("Operational");
    Transformer transformer("Optimus", 100, true, false, core);
    EXPECT_TRUE(transformer.getCoreStatus());
}

#include <gtest/gtest.h>
#include "Transformer.h"
#include "PowerCore.h"

TEST(TransformerConstructorTests, ConstructorWithFullParameters)
{
    PowerCore coreStatus(true);
    Transformer transformer("Optimus", 50, true, true, coreStatus);

    EXPECT_EQ(transformer.getCallSign(), "Optimus");
    EXPECT_EQ(transformer.getMoveSpeed(), 50);
    EXPECT_TRUE(transformer.getIsGunEquiped());
    EXPECT_TRUE(transformer.getIsTransformed());
    EXPECT_TRUE(transformer.getCoreStatus());
}

TEST(TransformerConstructorTests, ConstructorWithPartialParameters_WithoutCoreStatus)
{
    Transformer transformer("Bumblebee", 40, true, false);

    EXPECT_EQ(transformer.getCallSign(), "Bumblebee");
    EXPECT_EQ(transformer.getMoveSpeed(), 40);
    EXPECT_TRUE(transformer.getIsGunEquiped());
    EXPECT_FALSE(transformer.getIsTransformed());
    EXPECT_FALSE(transformer.getCoreStatus());
}

TEST(TransformerConstructorTests, ConstructorWithMinimumParameters)
{
    Transformer transformer("Ironhide", 30);

    EXPECT_EQ(transformer.getCallSign(), "Ironhide");
    EXPECT_EQ(transformer.getMoveSpeed(), 30);
    EXPECT_FALSE(transformer.getIsGunEquiped());
    EXPECT_FALSE(transformer.getIsTransformed());
    EXPECT_FALSE(transformer.getCoreStatus());  // Assuming default PowerCore status is false
}

TEST(TransformerComparisonTests, CompareTransformers_SpeedComparison)
{
    Transformer fastTransformer("Jetfire", 60);
    Transformer slowTransformer("Ratchet", 30);

    EXPECT_TRUE(slowTransformer < fastTransformer);
    EXPECT_FALSE(fastTransformer < slowTransformer);
}

TEST(TransformerComparisonTests, CompareTransformers_SameSpeed)
{
    Transformer transformer1("HotRod", 50);
    Transformer transformer2("Wheeljack", 45);

    EXPECT_FALSE(transformer1 < transformer2);
    EXPECT_TRUE(transformer2 < transformer1);
}


int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
