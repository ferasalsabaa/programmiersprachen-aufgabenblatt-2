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
  
  

  public:
  Color color_circle_;
  Circle();
  Circle(float radius, Vec2 center, Color color_circle_);  
  Vec2 get_center();
  float get_radius ();
  float circumference() const;
  Color get_color_circle();
  void draw(Window const& w1);
  void draw(Window const& w1,Color c1);
  bool is_inside(Vec2 punct) const;
};






#endif