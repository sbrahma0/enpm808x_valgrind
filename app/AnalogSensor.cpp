/**
 *  @file    AnalogSensor.cpp
 *  @author  Sayan Brahma
 *  @copyright Sayan Brahma
 *  @note Valgrind exercise enpm808x
 *  @brief Edited the file to fix the bugs reported by Valgrind tool
 */
#include <numeric>
#include <vector>
#include <AnalogSensor.hpp>


AnalogSensor::AnalogSensor(unsigned int samples)
    : mSamples(samples) {
}

AnalogSensor::~AnalogSensor() {
}

int AnalogSensor::Read() {
    std::vector<int> *readings = new std::vector<int>(mSamples, 10);

    double result = std::accumulate(readings->begin(), readings->end(), 0.0) / readings->size();
    delete readings;  // Fix 2 - deleting the reading variable after being used
    return result;
}

