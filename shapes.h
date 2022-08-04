#pragma once
#include <iostream>
#include <cmath>

struct Cirle{
    double x;
    double y;
    double radius;
};

struct Rectangle{
    double x;
    double y;
    double w;
    double h;
};


double calcCircleArea(double r);

double calcRectangleArea(double w, double h);