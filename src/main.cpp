#include "cpu.hpp"
#include "screen.hpp"

#include <iostream>
#include <random>

void randFrame(std::array<bool, 32*64> &mem);

int main(int argc, char * argv[])
{
	std::cout << "hello world !" << std::endl;

    CPU c;

    std::cout << "cpu memory size : " << c.memorySize << std::endl;
    std::cout << "cpu memory start adress : " << c.startAdress << std::endl;

    std::array<bool, 32*64> mem_vid;

    Screen s(mem_vid);

    while(1)
    {
        randFrame(mem_vid);
        s.refrech();
        usleep(16000);
    }

	
	return 0;
}

void randFrame(std::array<bool, 32*64> & mem)
{
    static std::default_random_engine generator;
    static std::bernoulli_distribution distribution(0.5);

    for(std::array<bool, 32*64>::iterator it_mem = mem.begin(); it_mem != mem.end(); ++it_mem)
    {
        *it_mem = distribution(generator);
    }
}
