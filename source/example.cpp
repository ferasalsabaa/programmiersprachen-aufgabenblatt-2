#include "window.hpp"
#include <GLFW/glfw3.h>
#include "rectangle.hpp"
#include "circle.hpp"
#include "vec2.hpp"
#include "color.hpp"
#include <utility>
#include <cmath>


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

    std::string text = "mouse position: (" + std::to_string(m.first) + ", " + std::to_string(m.second) + ")";
    win.draw_text(10, 5, 35.0f, text);
//2.11
    //rectangle
    Vec2 max(700,600);
    Vec2 min(200,400);
    Color color1(0.0f , 0.0f , 1.0f);
    Color color2(0.0f , 1.0f , 0.0f);
    Rectangle rectang1e1(max,min,color1);
    Rectangle rectang1e2(max,min,color1);
    Rectangle rectang1e3(max,min,color1);
    rectang1e1.draw(win);
    //circle
    float radius = 100;
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
    
    
    
    
    win.update();
  }

  return 0;
}
