#define CATCH_CONFIG_RUNNER

#include "vec2.hpp"
#include "mat2.hpp"
#include <catch.hpp>
#include <iostream>
//2.3
//null constructor
TEST_CASE("describe_vec2_constructor", "[vec]")
{
  Vec2 v1 ;
  REQUIRE(v1.x_ == 0.0f );
  REQUIRE(v1.y_ == 0.0f );
}
// constructor 
TEST_CASE("describe_vec2_constructor_values", "[vec2]")
{
  Vec2 v1(2.0f, 3.0f );
  Vec2 v2(2.25f, 3.4f );
  REQUIRE(v1.x_ == 2.0f );
  REQUIRE(v1.y_ == 3.0f );
  REQUIRE(v2.x_ == 2.25f);
  REQUIRE(v2.y_ == 3.4f );
} 
//addieren
TEST_CASE("describe_vec2_+= ", "[vec2]")
{
   Vec2 v1(2.0f, 3.0f );
   Vec2 v2(2.0f, 3.0f );
   v1 += (v2);
   REQUIRE(v1.x_ == 4.0f );
   REQUIRE(v1.y_ == 6.0f );
   Vec2 vector1(2.2f, 3.7f );
   Vec2 vector2(2.5f, 3.3f );
   vector1 += (vector2);
   REQUIRE(vector1.x_ == 4.7f );
   REQUIRE(vector1.y_ == 7.0f );
} 
//substraktion
TEST_CASE("describe_vec2_-= ", "[vec2]")
{
   Vec2 v1(2.0f, 3.0f );
   Vec2 v2(2.0f, 3.0f );
   v1 -= (v2);
   REQUIRE(v1.x_ == 0.0f );
   REQUIRE(v1.y_ == 0.0f );
   Vec2 vector1(-2.0f, -3.0f );
   Vec2 vector2(0.25f, 1.5f );
   vector1 -= (vector2);
   REQUIRE(vector1.x_ == -2.25f );
   REQUIRE(vector1.y_ == -4.5f );
}
// Multiplikation
TEST_CASE("describe_vec2_*= ", "[vec2]")
{
   Vec2 v1(2.0f, 3.0f );
   v1 *= (3);
   REQUIRE(v1.x_ == 6.0f );
   REQUIRE(v1.y_ == 9.0f );
   Vec2 v2(2.22f, 3.55f );
   v2 *= (0);
   REQUIRE(v2.x_ == 0.0f );
   REQUIRE(v2.y_ == 0.0f );
} 
// Division
TEST_CASE("describe_vec2_/= ", "[vec2]")
{
   Vec2 v1(8.0f, 6.0f );
   v1 /= (2);
   REQUIRE(v1.x_ == 4.0f );
   REQUIRE(v1.y_ == 3.0f );
   Vec2 v2(8.22f, 6.4f );
   v2 /= (2.0f);
   REQUIRE(v2.x_ == 4.11f );
   REQUIRE(v2.y_ == 3.2f );
} 
//2.4
//addition
   TEST_CASE("Addition_funktion", "[Vector]") 
   {
    REQUIRE((Vec2(2.0, 3.0) + Vec2(2.0, 3.0)).x_==4.0f);
    REQUIRE((Vec2(2.0, 3.0) + Vec2(2.0, 3.0)).y_==6.0f);
    REQUIRE((Vec2(4.5, 7.2) + Vec2(4.5, 1.2)).x_==9.0f);
    REQUIRE((Vec2(2.0, 7.2) + Vec2(2.0, 1.2)).y_==8.4f);
   }
//substraktion   
   TEST_CASE("substraktion_funktion", "[Vector]") 
   {
    REQUIRE((Vec2(7.0, 4.0) - Vec2(7.0, 5.0)).x_==0.0f);
    REQUIRE((Vec2(7.0, 4.0) - Vec2(7.0, 5.0)).y_==-1.0f);
    REQUIRE((Vec2(4.75, 7.2) - Vec2(4.5, 1.2)).x_==0.25f);
    REQUIRE((Vec2(2.0, -7.2) - Vec2(2.0, 1.2)).y_==-8.4f);
   }
// Multiplikation
   TEST_CASE("Multiplikation_funktion", "[Vector]") 
   {
    REQUIRE((Vec2(2.0, 3.0) * 3).x_ ==  6.0f);
    REQUIRE((Vec2(2.0, 3.0) * 3).y_ ==  9.0f);
    REQUIRE((Vec2(0.0, 3.0) * 3).x_ ==  0.0f);
    REQUIRE((Vec2(2.0,-3.0) * 3).y_ == -9.0f);
   }
// Division
   TEST_CASE("Division_funktion", "[Vector]") 
   {
    REQUIRE((Vec2(12.0, 3.0) / 3).x_ ==  4.0f);
    REQUIRE((Vec2(2.0, 3.0) / 3).y_ ==  1.0f);
    REQUIRE((Vec2(0.0, 7.0) / 3).x_ ==  0.0f);
    REQUIRE((Vec2(2.0,-18.0) / 3).y_ == -6.0f);
   }
// Multiplikation 2
   TEST_CASE("Multiplikation_funktion_2", "[Vector]") 
   {
    REQUIRE((3 * Vec2(2.0, 3.0)).x_ ==  6.0f);
    REQUIRE((3 * Vec2(2.0, 3.0)).y_ ==  9.0f);
    REQUIRE((3 * Vec2(0.0, 3.0)).x_ ==  0.0f);
    REQUIRE((3 * Vec2(2.0,-3.0)).y_ == -9.0f);
   }   
// 2.5
//Standard constructor
TEST_CASE("describe_mat2_Standard_constructor", "[mat]")
{
  Mat2 m1 ;
  REQUIRE(m1.arr[0][0]== 1 );
  REQUIRE(m1.arr[1][0]== 0 );
}
//User-Konstruktor
TEST_CASE("describe_mat2_user_constructor", "[mat]")
{
  Mat2 m1{2,3,5,7} ;
  REQUIRE(m1.arr[0][0]== 2 );
  REQUIRE(m1.arr[1][0]== 5 );
}
//operator *=
TEST_CASE("describe_mat2_*=", "[mat]")
{
  Mat2 m1{1,2,3,4} ;
  Mat2 m2{5,1,2,4} ;
  m1 *= (m2);
  REQUIRE(m1.arr[0][0]== 9 );
  REQUIRE(m1.arr[1][1]== 19);
}
//operator *
TEST_CASE("describe_mat2_*", "[mat]")
{
  Mat2 m1{1,2,3,4} ;
  Mat2 m2{5,1,2,4} ;
  
  REQUIRE( (m1 * m2).arr[0][0]== 9);
  REQUIRE( (m1 * m2).arr[1][1]== 19);
  REQUIRE( (m1 * m2).arr[1][0]== 23);
}
//2.6
//Determinant
TEST_CASE("describe_mat2_determinant", "[mat]")
{
  Mat2 m{4,3,2,3};
  float det1 = m.det();
  Mat2 m1{2,4,6,3};
  float det2 = m1.det();
  REQUIRE( det2== -18);
}
//Inverse
TEST_CASE("describe_mat2_inverse", "[mat]")
{
  Mat2 m1{2,4,6,3} ;
  Mat2 m3 = inverse(m1) ;
  
  REQUIRE( m3.arr[0][0]== Approx(-0.1666).epsilon(0.001));
  REQUIRE( m3.arr[0][1]== Approx(0.222).epsilon(0.001));
  REQUIRE( m3.arr[1][0]== Approx(0.333).epsilon(0.001));
  REQUIRE( m3.arr[1][1]== Approx(-0.111).epsilon(0.001)); 
}
int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
