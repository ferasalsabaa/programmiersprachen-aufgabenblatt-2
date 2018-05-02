#ifndef MATH2_HPP
#define MATH2_HPP
#include "vec2.hpp"
#include <iostream>
#include <array>

struct Mat2
{
std::array<std::array<double, 2>, 2> arr;
Mat2();
Mat2(double a, double b, double c, double d);
Mat2 & operator *=( Mat2 const & m );
float det () const ;
} ;

Mat2 operator *( Mat2 const & m1 , Mat2 const & m2 );
Vec2 operator *( Vec2 const & v , Mat2 const & m );
Vec2 operator *( Mat2 const & m , Vec2 const & v );




#endif