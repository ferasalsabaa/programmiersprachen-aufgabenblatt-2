#define CATCH_CONFIG_RUNNER

#include "mat2.hpp"

#include <cmath>
#include <iostream>
  Mat2::Mat2() 
{
   for (int i=0 ; i<2; i++)
   {
     for(int j=0; j<2; j++)
     {
         if(i==j)
         {
             arr[i][j]=1;
         }
         else
         {
             arr[i][j]=0;
         }
     }
   } 
}
Mat2::Mat2(int a,int b,int c,int d)
{
    arr[0][0]= a;
    arr[0][1]= b;
    arr[1][0]= c;
    arr[1][1]= d;
}
Mat2&
Mat2::operator *=( Mat2 const& m )
{  
   int a = 0;
   int b = 0; 
   a = (arr[0][0]*m.arr[0][0]) + (arr[0][1]*m.arr[1][0]) ;
   b = (arr[0][0]*m.arr[0][1]) + (arr[0][1]*m.arr[1][1]) ;
   arr[0][0]= a;
   arr[0][1]= b;
   a = (arr[0][0]*m.arr[0][0]) + (arr[1][1]*m.arr[1][0]) ;
   b = (arr[1][0]*m.arr[0][1]) + (arr[1][1]*m.arr[1][1]) ;
   arr[1][0]=a ;
   arr[1][1]=b ;
}