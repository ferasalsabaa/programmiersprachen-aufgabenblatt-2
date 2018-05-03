#define CATCH_CONFIG_RUNNER

#include "circle.hpp"
#include "vec2.hpp"
#include <cmath>
#include <iostream>

Circle::Circle() : radius_{0.0f} , center_{0.0f,0.0f} 
{}
Circle::Circle(float radius , Vec2 center) : radius_{radius}, center_{center}
{}
Vec2 Circle::get_center()
{
    return center_ ;
}
 float Circle::get_radius()
 {
     return radius_ ;
 }