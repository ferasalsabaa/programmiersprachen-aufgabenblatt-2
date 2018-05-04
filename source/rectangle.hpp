#ifndef Rectangle_HPP
#define Rectangle_HPP
#include "vec2.hpp"
class Rectangle
{
  private:
  const Vec2 punct1_ ;
  const Vec2 punct_2 ;
   Vec2 max_ ;
   Vec2 min_ ;

  public:
  Rectangle();
  Rectangle(Vec2 max_, Vec2 min_);
  Vec2 get_max();
  Vec2 get_min();
  float circumference() const;
};






#endif