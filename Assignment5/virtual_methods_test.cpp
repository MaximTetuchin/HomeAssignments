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

#include <gtest/gtest.h>
#include <vector>
#include "Transformer.h"
#include "Soldiers.h"
#include "Scouts.h"
#include "Artillery.h"

// Vector test for virtual methods
TEST(TransformerVirtualMethods, VectorTest) {
    std::vector<Transformer*> transformers;
    transformers.push_back(new Artillery("Enigma", 100));
    transformers.push_back(new Artillery("Huskar", 200));
    transformers.push_back(new Artillery("Invoker", 300));

    transformers.push_back(new Soldiers("Pudge", 100));
    transformers.push_back(new Soldiers("Juggernaut", 200));
    transformers.push_back(new Soldiers("Axe", 300));

    transformers.push_back(new Scouts("Phantom Assassin", 100));
    transformers.push_back(new Scouts("Shadow Fiend", 200));
    transformers.push_back(new Scouts("Earthshaker", 300));

    for (size_t i = 0; i < transformers.size(); ++i) {
        // Test ultimative() method
        testing::internal::CaptureStdout();
        transformers[i]->ultimative();
        std::string ultimativeOutput = testing::internal::GetCapturedStdout();
        EXPECT_NE(ultimativeOutput.find("Transformer casts an all-consuming black hole ???"), std::string::npos);

        // Test damaged() method
        testing::internal::CaptureStdout();
        transformers[i]->damaged();
        std::string damagedOutput = testing::internal::GetCapturedStdout();
        EXPECT_NE(damagedOutput.find("Ai,blin, ya masliny poimal!"), std::string::npos);

        // Test scream() method
        testing::internal::CaptureStdout();
        transformers[i]->scream();
        std::string screamOutput = testing::internal::GetCapturedStdout();
        EXPECT_NE(screamOutput.find("You hear a very loud scream!!!"), std::string::npos);
    }
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}