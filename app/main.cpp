/**
 *  @file    main.cpp
 *  @author  Sayan Brahma
 *  @copyright Sayan Brahma
 *  @note Valgrind exercise enpm808x
 *  @brief Edited the file to fix the bugs reported by Valgrind tool
 */
#include <iostream>
#include <AnalogSensor.hpp>

int main() {
    AnalogSensor lightSensor(5);
    std::cout << "Averaged sensor reading: " << lightSensor.Read() << std::endl;
    bool terminator = true;  // Fix 1 by initializing the boolean variable
    if ( terminator ) {
        std::cout << "DONE" << std::endl;
    }
    return 0;
}
