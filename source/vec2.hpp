# ifndef VEC2_HPP
# define VEC2_HPP
#include <catch.hpp>


struct Vec2
{
float x_ ;
float y_ ;
    Vec2(){
     float x_ = 0.0f;
     float y_ = 0.0f;
    }
  TEST_CASE("describe_Vec2_constructor", "[Vec2]"){
  REQUIRE(Vec2() == 0);
  REQUIRE(gcd(9,6) == 3);
  REQUIRE(gcd(3,7) == 1);
}
    Vec2(float x_,float y_){
    x_ = x_;
    y_ = y_;
    }
};
# endif