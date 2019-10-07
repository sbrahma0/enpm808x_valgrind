/**
 *  @file    ../test/test.cpp
 *  @author  Sayan Brahma
 *  @copyright Sayan Brahma
 *  @note Valgrind exercise enpm808x
 *  @brief Added comments
 */
#include <gtest/gtest.h>
#include"AnalogSensor.hpp"

AnalogSensor test(10);
TEST(AnalogSensorTest, Read_Test) {
  EXPECT_EQ(10, test.Read());
}

