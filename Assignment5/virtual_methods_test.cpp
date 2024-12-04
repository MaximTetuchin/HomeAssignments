#include <gtest/gtest.h>
#include "Transformer.h"
#include "Soldiers.h"
#include "Scouts.h"
#include "Artillery.h"

// scream() test
TEST(TransformerVirtualMethods, ScreamTest) {
    Transformer autobot("Optimus", 100);
    testing::internal::CaptureStdout();
    autobot.scream();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("You hear a very loud scream!!!"), std::string::npos);
}

// ultimative() test
TEST(TransformerVirtualMethods, UltimativeTest) {
    Artillery artillery("Megatron", 200);
    testing::internal::CaptureStdout();
    artillery.ultimative();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("Transformer casts an all-consuming black hole ???"), std::string::npos);
}

// damaged() test
TEST(TransformerVirtualMethods, DamagedTest) {
    Soldiers soldier("Bumblebee", 150);
    testing::internal::CaptureStdout();
    soldier.damaged();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("Ai,blin, ya masliny poimal!"), std::string::npos);
}

// pointers test
TEST(TransformerVirtualMethods, PolymorphicTest) {
    Transformer* transformer = new Scouts("Jazz", 180);
    testing::internal::CaptureStdout();
    transformer->ultimative();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("Transformer casts an all-consuming black hole"), std::string::npos);
}
int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}