#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include<cmath>
#include "vec2.hpp"

  Vec2 vector_zero;

TEST_CASE("describe_vec", "[vec]")
{
  REQUIRE(vector_zero.x_ == 0.0f );
  REQUIRE(vector_zero.y_ == 0.0f );
} 
 
//~Vec2();

  Vec2 vector_numbers(2.0f, 3.0f );

TEST_CASE("describe_vec2", "[vec2]")
{
  REQUIRE(vector_numbers.x_ == 2.0f );
  REQUIRE(vector_numbers.y_ == 3.0f );
} 


int main(int argc, char* argv[])
{ 
  
  return Catch::Session().run(argc, argv);
}