#pragma once
#include <cmath>
#include <iostream>

// 継承クラスCircle，Rectangleでのx,yの初期化に，
// Shapeクラスのコンスタトラクターを使う場合
class Shape {
 public:
  Shape(){};
  Shape(double x_, double y_) : x(x_), y(y_){};

  // 課題説明では何もしない関数でよいとしたが，
  // "warning: non-void function does not return a value"
  // というwarningがでるので，適当なdoubleを値を返す関数に変更．
  virtual double calcArea() { return 0.0; };

 private:
  double x;
  double y;
};

class Circle : public Shape {
 public:
  Circle(double x_, double y_, double r) : radius(r), Shape(x_, y_){};
  double calcArea();

 private:
  double radius;
};

class Rectangle : public Shape {
 public:
  Rectangle(double x_, double y_, double w_, double h_)
      : w(w_), h(h_), Shape(x_, y_){};
  double calcArea();

 private:
  double w;
  double h;
};

// // 継承クラスCircle2，Rectangle2でのx,yの初期化に，
// // Shapeのメソッド(setX, setY）を使う場合
class Shape2 {
 public:
  Shape2(){};
  Shape2(double x_, double y_) : x(x_), y(y_){};
  virtual double calcArea(){
    return 0.0;
  };
  void setX(double x_) { x = x_; }
  void setY(double y_) { y = y_; }

 private:
  double x;
  double y;
};

class Circle2 : public Shape2 {
 public:
  Circle2(double x_, double y_, double r) : radius(r) {
    setX(x_);
    setY(y_);
  };
  double calcArea();

 private:
  double radius;
};

class Rectangle2 : public Shape2 {
 public:
  Rectangle2(double x_, double y_, double w_, double h_) : w(w_), h(h_) {
    setX(x_);
    setY(y_);
  };
  double calcArea();

 private:
  double w;
  double h;
};
