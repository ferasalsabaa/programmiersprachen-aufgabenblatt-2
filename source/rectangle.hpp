#ifndef Rectangle_HPP
#define Rectangle_HPP
#include "vec2.hpp"
#include "color.hpp"
#include "window.hpp"
class Rectangle
{
  private:
  const Vec2 punct1_;
  const Vec2 punct2_;
  Vec2 max_;
  Vec2 min_;
  Color color_rectangle_;

  public:
  Rectangle();
  Rectangle(Vec2 max_, Vec2 min_,Color color_rectangle_);
  Vec2 get_max();
  Vec2 get_min();
  float circumference() const;
  Color get_color_rectangle();
  void draw(Window const& w1) const ;
};






#endif