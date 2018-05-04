#define CATCH_CONFIG_RUNNER

#include "rectangle.hpp"
#include "vec2.hpp"
#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

Rectangle::Rectangle() : punct1_{0.0f , 0.0f} , punct_2{0.0f , 0.0f} 
{}
Rectangle::Rectangle(Vec2 punct1 , Vec2 punct2) //: max_{max.x_,max.y_} , min_{min.x_, min.y_} 
{
  max_.x_= max(punct1.x_,punct2.x_);
  max_.y_= max(punct1.y_,punct2.y_);
  min_.x_= min(punct1.x_,punct2.x_);
  min_.y_= min(punct1.y_,punct2.y_);
}

Vec2 Rectangle::get_max()
{
    return max_;
}
Vec2 Rectangle::get_min()
{
    return min_;
}