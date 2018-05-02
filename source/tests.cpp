#define CATCH_CONFIG_RUNNER

#include "vec2.hpp"

#include <catch.hpp>
#include <iostream>


TEST_CASE("describe_vec2_constructor", "[vec]")
{
  Vec2 v1 ;
  REQUIRE(v1.x_ == 0.0f );
  REQUIRE(v1.y_ == 0.0f );
} 
TEST_CASE("describe_vec2_constructor_values", "[vec2]")
{
  Vec2 v1(2.0f, 3.0f );
  Vec2 v2(2.25f, 3.4f );
  REQUIRE(v1.x_ == 2.0f );
  REQUIRE(v1.y_ == 3.0f );
  REQUIRE(v2.x_ == 2.25f );
  REQUIRE(v2.y_ == 3.4f );
} 
TEST_CASE("describe_vec2_+= ", "[vec2]")
{
   Vec2 v1(2.0f, 3.0f );
   Vec2 v2(2.0f, 3.0f );
   v1.operator+= (v2);
   REQUIRE(v1.x_ == 4.0f );
   REQUIRE(v1.y_ == 6.0f );
} 
TEST_CASE("describe_vec2_-= ", "[vec2]")
{
   Vec2 v1(2.0f, 3.0f );
   Vec2 v2(2.0f, 3.0f );
   v1.operator-= (v2);
   REQUIRE(v1.x_ == 0.0f );
   REQUIRE(v1.y_ == 0.0f );
} 
TEST_CASE("describe_vec2_*= ", "[vec2]")
{
   Vec2 v1(2.0f, 3.0f );
   v1.operator*= (3);
   REQUIRE(v1.x_ == 6.0f );
   REQUIRE(v1.y_ == 9.0f );
} 
TEST_CASE("describe_vec2_/= ", "[vec2]")
{
   Vec2 v1(8.0f, 6.0f );
   v1.operator/= (2);
   REQUIRE(v1.x_ == 4.0f );
   REQUIRE(v1.y_ == 3.0f );
} 

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
