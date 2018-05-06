#include "window.hpp"
#include <GLFW/glfw3.h>
#include "rectangle.hpp"
#include "circle.hpp"
#include "vec2.hpp"
#include "color.hpp"
#include <utility>
#include <cmath>
#include <iostream>


int main(int argc, char* argv[])
{
  Window win{std::make_pair(800,800)};

  while (!win.should_close()) {
    if (win.get_key(GLFW_KEY_ESCAPE) == GLFW_PRESS) {
      win.close();
    }

    bool left_pressed = win.get_mouse_button(GLFW_MOUSE_BUTTON_LEFT) == GLFW_PRESS;

    auto t = win.get_time();

    float x1{400 + 380 * std::sin(t)};
    float y1{400 + 380 * std::cos(t)};

    float x2{400 + 380 * std::sin(2.0f*t)};
    float y2{400 + 380 * std::cos(2.0f*t)};

    float x3{400 + 380 * std::sin(t-10.f)};
    float y3{400 + 380 * std::cos(t-10.f)};

    win.draw_point(x1, y1,
        1.0f, 0.0f, 0.0f);
    win.draw_point(x2, y2, 0.0f, 1.0f, 0.0f);
    win.draw_point(x3, y3, 0.0f, 0.0f, 1.0f);

    auto m = win.mouse_position();
    if (left_pressed) {
      win.draw_line(30, 30, // from
          m.first, m.second, // to
          1.0,0.0,0.0);
    }

    win.draw_line(0, m.second, 10, m.second, 0.0, 0.0, 0.0);
    win.draw_line(win.window_size().second - 10, m.second, win.window_size().second, m.second, 0.0, 0.0, 0.0);

    win.draw_line(m.first, 0, m.first, 10, 0.0, 0.0, 0.0);
    win.draw_line(m.first, win.window_size().second - 10, m.first, win.window_size().second, 0.0, 0.0, 0.0);

    std::string text = "mouse position: (" + std::to_string(m.first) + ", " + std::to_string(m.second) + ")" ;
    win.draw_text(10, 5, 35.0f, text);
//2.11
    //rectangle
    Vec2 max(700,600);
    Vec2 min(200,400);
    Color color1(0.0f,0.0f,1.0f);
    Color color2(0.0f,1.0f,0.0f);
    Color color3(1.0f,0.0f,0.0f);
    Rectangle rectang1e1(max,min,color1);
    Rectangle rectang1e2(max,min,color1);
    Rectangle rectang1e3(max,min,color1);
    rectang1e1.draw(win);
    //circle
    float radius = 200;
    Vec2 v1(400.0f,400.0f);
    Circle circle1(radius,v1,color1);
    Circle circle2(radius,v1,color1);
    Circle circle3(radius,v1,color1);
    circle1.draw(win);
//2.12
    //rectang1e
    rectang1e1.draw(win,color2);
    //circle
    circle1.draw(win,color2);
//2.13
  //circle
  std :: vector <Circle> vector_circle {circle1,circle2,circle3};
  Vec2 vector11;
  vector11.x_ = float (m.first);
  vector11.y_ = float (m.second);
  for(Circle target: vector_circle){
    if(target.is_inside(vector11))
    {
      target.draw(win,color1);
    }
  }
  //rectangle
  std :: vector <Rectangle> vector_rectangle {rectang1e1,rectang1e2,rectang1e3};
  Vec2 vector12;
  vector12.x_ = float (m.first);
  vector12.y_ = float (m.second);
  for(Rectangle target: vector_rectangle){
    if(target.is_inside(vector12))
    {
      target.draw(win,color1);
    }
  }
//2.14
int second=(int) win.get_time() % 60;
int minute=0;
int hour=0;
double x_second{400 + 100 * std::sin(second*2 *M_PI / 60)};
double y_second{400 - 100 *  std::cos(second*2 *M_PI / 60)};
win.draw_line(400,400,x_second,y_second,color1.r,color1.g,color1.b);

  minute = (int) win.get_time() / 60 ;

if(minute > 60)
{
  hour = (int) win.get_time() / 60;
}

double x_minute{400 + 150 * std::sin(minute*2 *M_PI / 60)};
double y_minute{400 - 150 *  std::cos(minute*2 *M_PI / 60)};
win.draw_line(400,400,x_minute,y_minute,color3.r,color3.g,color3.b);
double x_hour{400 + 180 * std::sin(hour*2 *M_PI / 12)};
double y_hour{400 - 180 *  std::cos(hour*2 *M_PI / 12)};
win.draw_line(400,400,x_hour,y_hour,color1.r,color1.g,color1.b);


std::string text11 = "second,minute,hour: ("  + std::to_string(second) + ", " + std::to_string(minute) + ", " + std::to_string(hour) +")";
win.draw_text(10, 60, 35.0f, text11);

    
    
    
    
    win.update();
  }

  return 0;
}
