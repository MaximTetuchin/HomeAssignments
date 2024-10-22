#include <gtest/gtest.h>
#include "Transformer.h"
#include "PowerCore.h" // Предполагается, что класс PowerCore также определен
#include "Status.h" // Подключаем новый класс RobotStatus

// Тестируем класс RobotStatus
TEST(RobotStatusTest, ConstructorAndGetStatus) {
    RobotStatus status("Operational");
    EXPECT_EQ(status.getStatus(), "Operational");
}

TEST(RobotStatusTest, SetGetStatus) {
    RobotStatus status("Operational");
    status.setStatus("Damaged");
    EXPECT_EQ(status.getStatus(), "Damaged");
}

// Тестируем класс Transformer
TEST(TransformerTest, ConstructorAndGetCallSign) {
    PowerCore core(true);
    RobotStatus status("Operational");
    Transformer transformer("Optimus", 100, true, false, core);
    EXPECT_EQ(transformer.getCallSign(), "Optimus");
}

TEST(TransformerTest, ConstructorAndGetMoveSpeed) {
    PowerCore core(true);
    RobotStatus status("Operational");
    Transformer transformer("Optimus", 100, true, false, core);
    EXPECT_EQ(transformer.getMoveSpeed(), 100);
}

TEST(TransformerTest, ConstructorAndGetIsGunEquiped) {
    PowerCore core(true);
    RobotStatus status("Operational");
    Transformer transformer("Optimus", 100, true, false, core);
    EXPECT_TRUE(transformer.getIsGunEquiped());
}

TEST(TransformerTest, ConstructorAndGetIsTransformed) {
    PowerCore core(true);
    RobotStatus status("Operational");
    Transformer transformer("Optimus", 100, true, false, core);
    EXPECT_FALSE(transformer.getIsTransformed());
}

TEST(TransformerTest, ConstructorAndGetCoreStatus) {
    PowerCore core(true);
    RobotStatus status("Operational");
    Transformer transformer("Optimus", 100, true, false, core);
    EXPECT_TRUE(transformer.getCoreStatus()); // Проверка статуса ядра
}

// Тестируем сеттеры
TEST(TransformerTest, SetGetCallSign) {
    PowerCore core(true);
    RobotStatus status("Operational");
    Transformer transformer("Optimus", 100, true, false, core);
    transformer.setCallSign("Megatron");
    EXPECT_EQ(transformer.getCallSign(), "Megatron");
}

TEST(TransformerTest, SetGetMoveSpeed) {
    PowerCore core(true);
    RobotStatus status("Operational");
    Transformer transformer("Optimus", 100, true, false, core);
    transformer.setMoveSpeed(150);
    EXPECT_EQ(transformer.getMoveSpeed(), 150);
}

TEST(TransformerTest, SetGetIsGunEquiped) {
    PowerCore core(true);
    RobotStatus status("Operational");
    Transformer transformer("Optimus", 100, true, false, core);
    transformer.setIsGunEquiped(false);
    EXPECT_FALSE(transformer.getIsGunEquiped());
}

TEST(TransformerTest, SetGetIsTransformed) {
    PowerCore core(true);
    RobotStatus status("Operational");
    Transformer transformer("Optimus", 100, true, false, core);
    
    transformer.setIsTransformed(true);
    EXPECT_TRUE(transformer.getIsTransformed());
}

// Тестируем метод getStatus
TEST(TransformerTest, GetStatus) {
    PowerCore core(true);
    RobotStatus status("Operational");
    Transformer transformer("Optimus", 100, true, false, core);

    EXPECT_EQ(transformer.getStatus(status), "Operational"); // Проверка статуса
}

// Остальные тесты...

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
