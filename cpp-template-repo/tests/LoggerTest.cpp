#include "Logger.h"
#include <gtest/gtest.h>
#include <sstream>
#include <iostream>

class LoggerTest : public ::testing::Test {
protected:
    std::stringstream buffer;
    std::streambuf* old;

    void SetUp() override {
        old = std::cout.rdbuf(buffer.rdbuf());
    }

    void TearDown() override {
        std::cout.rdbuf(old);
    }
};

TEST_F(LoggerTest, LogMessage) {
    Logger logger;
    logger.log("Test message");
    EXPECT_EQ(buffer.str(), "Log: Test message\n");
} 