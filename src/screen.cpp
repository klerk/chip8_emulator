#include "screen.hpp"
#include <iostream>


Screen::Screen(const std::array<bool, 32*64> &p):
    pixels(p)
{ }

void Screen::refrech()
{
  clear();
  for(int i = 0; i < 32; ++i)
  {
    for(int j = 0; j < 64; ++j)
    {
      if(pixels[64*i+j])
            std::cout << "██";
      else
            std::cout << "  ";
    }
    std::cout<<'\n';
  }
  std::cout << std::endl;
}
