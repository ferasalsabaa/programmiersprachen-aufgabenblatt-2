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
