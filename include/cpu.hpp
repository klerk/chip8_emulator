#pragma once
#ifndef CPU_HPP
#define CPU_HPP

#include <array>
#include <cstdint>

/**
 * @brief The CPU class
 */
class CPU
{

public:
    CPU();

    static const int memorySize = 0x1000;
    static const int startAdress = 0x200;

private:

    // memory
    std::array<std::uint8_t, memorySize> memory;
    std::uint16_t pc; //< Programme Counter

    //register
    std::array<std::uint8_t, 16> V; //< V0 to VF
    std::uint16_t I;

    //stack
    std::array<std::uint16_t, 16> stack;
    std::uint8_t stackPosition;

    // Timer
    std::uint8_t sysTimer;
    std::uint8_t soundTimer;

};

#endif // CPU_H
