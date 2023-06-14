#include <gtest/gtest.h>
#include <memory>
#include "developer.hpp"

TEST(DeveloperTest, ConstructorAndGetters) {
   
    // Test JuniorDeveloper class
    JuniorDeveloper juniorDev("Benedikt Trenz", "Ben");
    EXPECT_EQ(juniorDev.get_name(), "Benedikt Trenz");
    EXPECT_EQ(juniorDev.get_alias(), "Ben");

    // Test SeniorDeveloper class
    SeniorDeveloper seniorDev("Max Mustermann", "MustiMax");
    EXPECT_EQ(seniorDev.get_name(), "Max Mustermann");
    EXPECT_EQ(seniorDev.get_alias(), "MustiMax");
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
