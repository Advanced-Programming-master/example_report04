#include <iostream>
#include "shapes.h"

int main(){

    Circle c(0.0, 0.0, 1.0);
    Rectangle r(0.0, 0.0, 1.0, 2.0);

    Circle2 c2(0.0, 0.0, 1.0);
    Rectangle2 r2(0.0, 0.0, 1.0, 2.0);
    
    std::cout << c.calcArea() << std::endl;
    std::cout << r.calcArea() << std::endl;

    std::cout << c2.calcArea() << std::endl;
    std::cout << r2.calcArea() << std::endl;

}