#include"iostream"
# ifndef VEC2_HPP
# define VEC2_HPP



struct Vec2
{
 float x_ ;
 float y_ ;
    Vec2(){
     float x_ = 0.0f;
     float y_ = 0.0f;
    }
    ~Vec2()
    {
      std:: cout << "bla bla" ;
    }
 
    Vec2(float x_,float y_){
     x_ = x_;
     y_  = y_;
    } 
    
};
# endif