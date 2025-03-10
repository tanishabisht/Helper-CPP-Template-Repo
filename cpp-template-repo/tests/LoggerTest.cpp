#include "Logger.h"
#include <gtest/gtest.h>
#include <string>
#include <vector>

TEST(LoggerTest, LogMessages) {
    Logger logger;

    logger.log("add");
    logger.log("subtract");

    const std::vector<std::string>& logs = logger.getLogs();
    ASSERT_EQ(logs.size(), 2);
    EXPECT_EQ(logs[0], "add");
    EXPECT_EQ(logs[1], "subtract");
} 