#include <gtest/gtest.h>
#include <memory>
#include "developer.hpp"

TEST(DeveloperTest, ConstructorAndGetters) {
   
    // Test JuniorDeveloper class
    JuniorDeveloper juniorDev("Benedikt Trenz", "Ben");
    EXPECT_EQ(juniorDev.getName(), "Benedikt Trenz");
    EXPECT_EQ(juniorDev.getAlias(), "Ben");

    // Test SeniorDeveloper class
    SeniorDeveloper seniorDev("Max Mustermann", "MustiMax");
    EXPECT_EQ(seniorDev.getName(), "Max Mustermann");
    EXPECT_EQ(seniorDev.getAlias(), "MustiMax");
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
