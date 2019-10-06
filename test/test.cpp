/**
 *  @file    ../test/test.cpp
 *  @author  Sayan Brahma
 *  @copyright Sayan Brahma
 *  @note Valgrind exercise enpm808x
 *  @brief Added comments
 */
#include <gtest/gtest.h>

AnalogSensor ob1(10);
TEST(AnalogSensorTest, Read_Test) {
  EXPECT_EQ(10, ob1.Read());
}

