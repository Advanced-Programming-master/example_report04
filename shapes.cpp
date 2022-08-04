#include "shapes.h"

double Circle::calcArea(){
    return radius*radius*M_PI;
}

double Rectangle::calcArea(){
    return w*h;
}

// Shape2, Circle2, Rectangle2を使う場合
double Circle2::calcArea(){
    return radius*radius*M_PI;
}
double Rectangle2::calcArea(){
    return w*h;
}