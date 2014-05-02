#include "cpu.hpp"

CPU::CPU():
    pc(startAdress),
    I(0),
    stackPosition(0),
    sysTimer(0),
    soundTimer(0)
{
    memory.fill(0);
    V.fill(0);
    stack.fill(0);
}
