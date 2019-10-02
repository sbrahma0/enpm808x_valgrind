/**
 *  @file    AnalogSensor.hpp
 *  @author  Sayan Brahma
 *  @copyright Sayan Brahma
 *  @note Valgrind exercise enpm808x
 *  @brief Added comments and explicit keyword before the constructor
 */
#pragma once

#include <iostream>

class AnalogSensor {
 public:
    explicit AnalogSensor(unsigned int samples);
    ~AnalogSensor();
    int Read();
 private:
    unsigned int mSamples;
};
