#include <iostream>
#include <gtest/gtest.h>

void testCalculator();
void testLogger();
void testNotifier();

int main(int argc, char **argv) {
  // Initialize Google Test
  ::testing::InitGoogleTest(&argc, argv);
  
  // Run all tests
  return RUN_ALL_TESTS();
}
