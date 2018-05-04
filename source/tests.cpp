#define CATCH_CONFIG_RUNNER

#include "vec2.hpp"
#include "mat2.hpp"
#include "color.hpp"
#include "circle.hpp"
#include "rectangle.hpp"
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
//transpose
TEST_CASE("describe_mat2_transpose", "[mat]")
{
  Mat2 m1{2,4,6,3} ;
  Mat2 m2 = transpose(m1) ;
  
  REQUIRE( m2.arr[0][0]== 2);
  REQUIRE( m2.arr[0][1]== 6);
  REQUIRE( m2.arr[1][0]== 4);
  REQUIRE( m2.arr[1][1]== 3); 
}
//operator vector * matrix
TEST_CASE("describe_mat2_operator*_vector_matrix", "[mat]")
{
  Mat2 m1{1,2,3,4} ;
  Vec2 v1{5,6} ;
  Vec2 v_result = v1* m1 ;
  Mat2 m2{2,4,3,1} ;
  Vec2 v2{2,3} ;
  Vec2 v_result2 = v2* m2 ;
  
  REQUIRE( v_result.x_ == 17);
  REQUIRE( v_result.y_ == 39);
  REQUIRE( v_result2.x_ == 16);
  REQUIRE( v_result2.y_ == 9);
}
//operator matrix * vector
TEST_CASE("describe_mat2_operator*_matrix_vector", "[mat]")
{
  Mat2 m1{1,2,3,4} ;
  Vec2 v1{5,6} ;
  Vec2 v_result = m1 * v1 ;
  Mat2 m2{2,4,3,1} ;
  Vec2 v2{2,3} ;
  Vec2 v_result2 = m2* v2 ;
  
  REQUIRE( v_result.x_ == 17);
  REQUIRE( v_result.y_ == 39);
  REQUIRE( v_result2.x_ == 16);
  REQUIRE( v_result2.y_ == 9);
}
//Winkel 
TEST_CASE("describe_mat2_winkel_phi", "[mat]")
{
  float x = 45 ;
  float y = 90 ;
  
  REQUIRE( make_rotation_mat2(x).arr[0][0] == Approx(0.525).epsilon(0.001));
  REQUIRE( make_rotation_mat2(x).arr[0][1] == Approx(-0.85).epsilon(0.001));
  REQUIRE( make_rotation_mat2(x).arr[1][0] == Approx(0.85).epsilon(0.001));
  REQUIRE( make_rotation_mat2(x).arr[1][1] == Approx(0.525).epsilon(0.001));
  REQUIRE( make_rotation_mat2(y).arr[0][0] == Approx(-0.448).epsilon(0.001));
  REQUIRE( make_rotation_mat2(y).arr[0][1] == Approx(-0.893).epsilon(0.001));
  REQUIRE( make_rotation_mat2(y).arr[1][0] == Approx(0.893).epsilon(0.001));
  REQUIRE( make_rotation_mat2(y).arr[1][1] == Approx(-0.448).epsilon(0.001));
  
}
//2.7 color
TEST_CASE("describe_color", "[color]")
{
  Color black {0.0}; // sets r = g = b =0.0
  Color red {1.0 ,0.0 ,0.0};
  
  REQUIRE( red.r== Approx(1.0).epsilon(0.001));
  REQUIRE( red.g== Approx(0.0).epsilon(0.001));
  REQUIRE( red.b== Approx(0.0).epsilon(0.001));
  REQUIRE( black.r== Approx(0.0).epsilon(0.001));
  REQUIRE( black.g== Approx(0.0).epsilon(0.001));
  REQUIRE( black.b== Approx(0.0).epsilon(0.001));
}
//2.8 
//circle
TEST_CASE("describe_circle", "[circle]")
{
  Circle c1;
  Vec2 v1{2,3};
  Circle c2 {22,v1};
  REQUIRE(c1.get_radius() == 0) ;
  REQUIRE(c1.get_center().x_ == 0) ;
  REQUIRE(c1.get_center().y_ == 0) ;
  REQUIRE(c2.get_radius() == 22) ;
  REQUIRE(c2.get_center().x_ ==2) ;
  REQUIRE(c2.get_center().y_ == 3) ;
}
//rectangle
TEST_CASE("describe_rectangle", "[rectangle]")
{
  Rectangle r1;
  Vec2 v1{2,4};
  Vec2 v2{7,6};
  Rectangle r2 {v2,v1};
  Vec2 v3{2,6};
  Vec2 v4{7,4};
  Rectangle r3 {v3,v4};
  REQUIRE(r1.get_max().x_== 0);
  REQUIRE(r1.get_max().y_== 0);
  REQUIRE(r2.get_max().x_== 7);
  REQUIRE(r2.get_max().y_== 6);
  REQUIRE(r2.get_min().x_== 2);
  REQUIRE(r2.get_min().y_== 4);
  REQUIRE(r3.get_max().x_== 7);
  REQUIRE(r3.get_max().y_== 6);
  REQUIRE(r3.get_min().x_== 2);
  REQUIRE(r3.get_min().y_== 4);
}
//2.9
//circumference for circle
TEST_CASE("describe_circle_circumference", "[circle]")
{
  Vec2 v1{2,3};
  Circle c1 {22,v1};
  Circle c2 {5,v1};
  REQUIRE(c1.circumference() == Approx(138.23).epsilon(0.001)) ;
  REQUIRE(c2.circumference() == Approx(31.415).epsilon(0.001)) ;
}
//circumference for rectangle
TEST_CASE("describe_rectangle_circumference", "[rectangle]")
{
  Vec2 v1{2,4};
  Vec2 v2{7,6};
  Rectangle r1 {v2,v1};
  Vec2 v3{2,6};
  Vec2 v4{7,4};
  Rectangle r2 {v3,v4};
  REQUIRE(r1.circumference() == Approx(14).epsilon(0.001)) ;
  REQUIRE(r2.circumference() == Approx(14).epsilon(0.001)) ;
}

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
