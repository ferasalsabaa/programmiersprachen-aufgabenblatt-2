#ifndef Circle_HPP
#define Circle_HPP
#include "vec2.hpp"
#include "color.hpp"
#include "window.hpp"
class Circle
{
  private:
  const float radius_;
  const Vec2 center_;
  Color color_circle_;
  

  public:
  Circle();
  Circle(float radius, Vec2 center, Color color_circle_);  
  Vec2 get_center();
  float get_radius ();
  float circumference() const;
  Color get_color_circle();
  void draw(Window const& w1) const ;
};






#endif