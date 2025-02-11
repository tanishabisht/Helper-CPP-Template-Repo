#include "Notifier.h"
#include <gtest/gtest.h>
#include <sstream>
#include <iostream>

TEST(NotifierTest, NotificationCheck) {
    Notifier notifier(10);

    notifier.checkAndNotify(5);
    EXPECT_FALSE(notifier.wasNotified());

    notifier.checkAndNotify(15);
    EXPECT_TRUE(notifier.wasNotified());
} 