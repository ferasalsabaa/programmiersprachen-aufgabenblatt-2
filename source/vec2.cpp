#define CATCH_CONFIG_RUNNER

#include "vec2.hpp"

#include <cmath>
#include <iostream>

  Vec2::Vec2() 
  {
      x_ = 0.0f;
      y_ = 0.0f;
  }

  Vec2::~Vec2()
   {

   }

  Vec2::Vec2(float x, float y) 
  {
    x_ = x;
    y_ = y;
  }

    Vec2& 
    Vec2::operator +=( Vec2 const& v )
    {
      x_ +=  v.x_ ;
      y_ +=  v.y_ ;
    }
    Vec2& 
    Vec2::operator -=( Vec2 const& v )
    {
      x_ -=  v.x_ ;
      y_ -=  v.y_ ;
    }
    Vec2&
    Vec2::operator *= (float s)
    {
      x_ *= s ;
      y_ *= s ;
    }
    Vec2&
    Vec2::operator /= (float s)
    {
      if(s == 0)
      {
        std :: cout << "die Zahl soll grosser als 0 sein" ;
      }
      else
      {
      x_ /= s ;
      y_ /= s ;
      }
    }
Vec2 operator+( Vec2 const & u , Vec2 const & v )
{
  Vec2 vector (u.x_+v.x_ , u.y_+v.y_) ;
  return vector ;
}
Vec2 operator-( Vec2 const & u , Vec2 const & v )
{
  Vec2 vector (u.x_-v.x_ , u.y_-v.y_) ;
  return vector ;
}
Vec2 operator *( Vec2 const & v , float s )
{
  Vec2 vector (s * v.x_ , s * v.y_) ;
  return vector ;
}
Vec2 operator /( Vec2 const & v , float s )
{
  if(s == 0)
  {
    std :: cout << "Die Zahl kann nicht 0 sein " << "/n" ;
  }
  else 
  {
  Vec2 vector (v.x_  / s , v.y_ / s) ;
  return vector ;
  }
}
//Vec2 operator *( float s , Vec2 const & v );
