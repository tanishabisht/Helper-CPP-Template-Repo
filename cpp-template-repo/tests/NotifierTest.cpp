#include "Notifier.h"
#include <gtest/gtest.h>
#include <sstream>
#include <iostream>

class NotifierTest : public ::testing::Test {
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

TEST_F(NotifierTest, NotifyMessage) {
    Notifier notifier;
    notifier.notify("Threshold exceeded");
    EXPECT_EQ(buffer.str(), "Notification: Threshold exceeded\n");
} 