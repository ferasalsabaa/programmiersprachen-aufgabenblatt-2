#ifndef Circle_HPP
#define Circle_HPP
#include "vec2.hpp"
class Circle
{
  private:
  const float radius_ ;
  const Vec2 center_ ; 

  public:
  Circle();
  Circle(float radius, Vec2 center);
  Vec2 get_center();
  float get_radius ();
};






#endif