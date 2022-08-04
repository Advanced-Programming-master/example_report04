#include <iostream>
#include "shapes.h"

int main(){

    Cirle c = {0.0, 0.0, 1.0};
    Rectangle r = {0.0, 0.0, 1.0, 2.0};
    
    std::cout << calcCircleArea(c.radius) << std::endl;
    std::cout << calcRectangleArea(r.w, r.h) << std::endl;
}