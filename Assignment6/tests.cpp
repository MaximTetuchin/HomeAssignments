/* Maxim Tetuchin tetuhin@inbox.ru | st128993@student.spbu.ru
Assignment 6
*/

#include <gtest/gtest.h>
#include "code.h"
#include <vector>

// 1, Class1ReturnsTrue
TEST(TemplateClassTest, Class1ReturnsTrue) {
    std::vector<float> vec = {1.0f, 2.0f, 3.0f};
    Class1 obj;
    template_class<Class1> test_obj(obj, 5, vec);
    EXPECT_TRUE(test_obj.foo());
}

// 2, Class1ReturnsFalse
TEST(TemplateClassTest, Class1ReturnsFalse) {
    std::vector<float> vec = {1.0f, 2.0f, 3.0f};
    Class1 obj;
    template_class<Class1> test_obj(obj, -5, vec);
    EXPECT_FALSE(test_obj.foo());
}

// 3, Class2ReturnsTrue
TEST(TemplateClassTest, Class2ReturnsTrue) {
    std::vector<float> vec = {1.0f};
    Class2 obj;
    template_class<Class2> test_obj(obj, 0, vec);
    EXPECT_TRUE(test_obj.foo());
}

// 4, Class2ReturnsFalse
TEST(TemplateClassTest, Class2ReturnsFalse) {
    std::vector<float> vec;
    Class2 obj;
    template_class<Class2> test_obj(obj, 0, vec);
    EXPECT_FALSE(test_obj.foo());
}

// 5, Class3ReturnsTrue
TEST(TemplateClassTest, Class3ReturnsTrue) {
    std::vector<float> vec = {1.0f, 2.0f};
    Class3 obj;
    template_class<Class3> test_obj(obj, -2, vec);
    EXPECT_TRUE(test_obj.foo());
}

// 6, Class3ReturnsFalse
TEST(TemplateClassTest, Class3ReturnsFalse) {
    std::vector<float> vec = {1.0f, 2.0f};
    Class3 obj;
    template_class<Class3> test_obj(obj, -3, vec);
    EXPECT_FALSE(test_obj.foo());
}

//! Specialisations

// 7
TEST(TemplateClassTest, IntSpecializationAlwaysTrue) {
    std::vector<float> vec = {1.0f};
    template_class<int> test_obj(42, 0, vec);
    EXPECT_TRUE(test_obj.foo());
}

// 8
TEST(TemplateClassTest, DoubleSpecializationAlwaysFalse) {
    std::vector<float> vec = {1.0f};
    template_class<double> test_obj(3.14, 0, vec);
    EXPECT_FALSE(test_obj.foo());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}