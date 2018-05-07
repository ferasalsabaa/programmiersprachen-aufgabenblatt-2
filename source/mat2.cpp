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
   a = (arr[0][0]*m.arr[0][0]) + (arr[0][1]*m.arr[1][0]);
   b = (arr[0][0]*m.arr[0][1]) + (arr[0][1]*m.arr[1][1]);
   arr[0][0]= a;
   arr[0][1]= b;

   double c = 0;
   double d = 0;
   c = (arr[1][0]*m.arr[0][0]) + (arr[1][1]*m.arr[1][0]);
   d = (arr[1][0]*m.arr[0][1]) + (arr[1][1]*m.arr[1][1]);
   arr[1][0]=c;
   arr[1][1]=d;

   return *this;
}
Mat2 operator *( Mat2 const & m1 , Mat2 const & m2 )
{
   Mat2 m3(m1);
   m3 *= m2;
   return m3;
}
float
Mat2::det ( ) const
{
  float det;
  det = arr[0][0]*arr[1][1] - arr[0][1]*arr[1][0];
  return det;
}
Mat2 inverse ( Mat2 const & m )
{
  double fraction;  
  Mat2 m1{m};
  fraction = m.det();
  fraction = 1 / fraction;
  m1.arr[0][0] = m.arr[1][1];
  m1.arr[1][1] = m.arr[0][0];
  m1.arr[0][1] *= -1;
  m1.arr[1][0] *= -1;
  m1.arr[0][0] *= fraction;
  m1.arr[0][1] *= fraction;
  m1.arr[1][0] *= fraction;
  m1.arr[1][1] *= fraction;
  return m1;
}
Mat2 transpose ( Mat2 const & m )
{
  Mat2 m1{m};
  m1.arr[0][1] = m.arr[1][0];
  m1.arr[1][0] = m.arr[0][1];
  return m1;
}
Vec2 operator *( Vec2 const & v , Mat2 const & m )
{
  Vec2 vector;
  vector.x_ = (m.arr[0][0] * v.x_) + (m.arr[0][1]*v.y_);
  vector.y_ = (m.arr[1][0] *  v.x_) + (m.arr[1][1]*v.y_);
  return vector;
}
Vec2 operator *( Mat2 const & m , Vec2 const & v )
{
  return v * m;
}
Mat2 make_rotation_mat2 ( float phi )
{
  Mat2 m;
  m.arr[0][0] = cos (phi);
  m.arr[0][1] = -sin (phi);
  m.arr[1][0] = sin (phi);
  m.arr[1][1] = cos (phi);
  return m;
}