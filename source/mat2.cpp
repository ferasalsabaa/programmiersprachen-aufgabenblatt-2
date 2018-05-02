#define CATCH_CONFIG_RUNNER

#include "mat2.hpp"

#include <cmath>
#include <iostream>
  Mat2::Mat2() : arr{{ {1.0, 0.0}, {0.0, 1.0} }}
{}
Mat2::Mat2(double a, double b, double c, double d) : arr{{ {a, b}, {c, d}}}
{
}
Mat2&
Mat2::operator *=( Mat2 const& m )
{  
   double a = 0;
   double b = 0; 
   a = (arr[0][0]*m.arr[0][0]) + (arr[0][1]*m.arr[1][0]) ;
   b = (arr[0][0]*m.arr[0][1]) + (arr[0][1]*m.arr[1][1]) ;
   arr[0][0]= a;
   arr[0][1]= b;

   double c = 0;
   double d = 0;
   c = (arr[1][0]*m.arr[0][0]) + (arr[1][1]*m.arr[1][0]) ;
   d = (arr[1][0]*m.arr[0][1]) + (arr[1][1]*m.arr[1][1]) ;
   arr[1][0]=c ;
   arr[1][1]=d ;

   return *this;
}
Mat2 operator *( Mat2 const & m1 , Mat2 const & m2 )
{
   Mat2 m3(m1) ;
   m3 *= m2;
   return m3 ;
}
Mat2 inverse ( Mat2 const & m )
{
  double fraction ;  
  Mate2 m1(m);
  fraction = (m1[0][0]*m1[1][1]) - (m1[0][1]*m1[1][0]) ;
}