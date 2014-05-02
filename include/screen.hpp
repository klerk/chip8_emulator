#pragma once
#ifndef __SCREEN_HPP__
#define __SCREEN_HPP__

#include <boost/multi_array.hpp>

#include <array>

class Screen
{
  public:
    //typedef const boost::const_multi_array_ref<bool, 2>  const_ref_memoire_video;
  
//  Screen(const_ref_memoire_video ref)
//  : memoire_video(ref)
//  {};
  Screen(const std::array<bool, 32*64> & p);
  
  inline void clear(){system("clear");}
  
  void refrech();
  
  private:
  //const_ref_memoire_video memoire_video;

  const std::array<bool, 32*64> & pixels;
};

#endif //__SCREEN_HPP__
