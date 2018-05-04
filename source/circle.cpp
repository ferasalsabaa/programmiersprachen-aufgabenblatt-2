#define CATCH_CONFIG_RUNNER

#include "circle.hpp"
#include "vec2.hpp"
#include <cmath>
#include <iostream>

Circle::Circle() : radius_{0.0f} , center_{0.0f,0.0f} , color_circle_{0.0f,0.0f,0.0f}
{}
Circle::Circle(float radius , Vec2 center , Color color_circle) : radius_{radius}, center_{center}, color_circle_{color_circle}
{}
Vec2 Circle::get_center()
{
    return center_ ;
}
 float Circle::get_radius()
 {
     return radius_ ;
 }
float Circle::circumference() const
{
    return 2*M_PI*radius_;
}
Color Circle::get_color_circle()
{
    return color_circle_ ;
}
void Circle::draw(Window const& w1)
{
    for(int i = 500 ; i>0;i--)
    {
    float x1{center_.x_ + radius_ * std::sin(w1.get_time()-i)};
    float y1{center_.y_+ radius_ * std::cos(w1.get_time()-i)};
    w1.draw_point(x1,y1,0.0f,0.0f,1.0f);
    }
}
void Circle::draw(Window const& w1,Color c1)
{
    for(int i = 500 ; i>0;i--)
    {
    float x1{center_.x_ + radius_ * std::sin(w1.get_time()-i)};
    float y1{center_.y_+ radius_ * std::cos(w1.get_time()-i)};
    w1.draw_point(x1,y1,c1.r,c1.g,c1.b);
    }
}
bool Circle::is_inside(Vec2 punct) const
{
    float distance;
    distance = (punct.x_- center_.x_)*(punct.x_- center_.x_) + (punct.y_- center_.y_)*(punct.y_- center_.y_);  
    if(distance <= radius_ * radius_)
    {
      return true ;
    }
    else
    {
      return false ;
    }
}