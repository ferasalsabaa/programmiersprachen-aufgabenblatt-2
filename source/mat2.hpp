#ifndef MATH2_HPP
#define MATH2_HPP
#include <iostream>
#include <array>

struct Mat2
{
std::array<std::array<int, 2>, 2> arr;
Mat2();
Mat2(int a,int b,int c,int d);
Mat2 & operator *=( Mat2 const & m );
} ;

Mat2 operator *( Mat2 const & m1 , Mat2 const & m2 );



#endif