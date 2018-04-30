#define CATCH_CONFIG_RUNNER

#include "vec2.hpp"

#include <cmath>
#include <iostream>

  Vec2::Vec2() {
      x_ = 0.0f;
      y_ = 0.0f;
  }

  Vec2::~Vec2() {

  }

  Vec2::Vec2(float x, float y) {
    x_ = x;
    y_ = y;
  }

    Vec2& 
    Vec2::operator +=( Vec2 const& v )
    {
      x_ += + v.x_ ;
      y_ += + v.y_ ;
    }
