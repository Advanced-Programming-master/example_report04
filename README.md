# アドバンストプログラミング 第4回課題

本リポジトリをクローンして，以下のように修正したコードを作成せよ．

- 基本クラスShapeを作成し，Shapeを継承したCircleクラス，Ｒectangleクラスを作成せよ．
- 基本クラスShapeにてメソッドcalcArea()を定義し，Circleクラス, Rectangleクラスではそれをオーバライドせよ．
- 基本クラスShapeのcalcArea()（Shape::calcArea()）は，なにもしない関数でよい．
```c++
double Shape::calcArea(){}
```
- Circleクラス, RectangleクラスでのcalcArea()は， shapes.cppで実装されているcalcCircleArea(double r)およびcalcRectangleArea(double w, double h)を参考に実装せよ．
- main関数のあるreport04.cppの先頭に，コメント文で名前と学籍番号を記入すること
- (optional) cmakeを使ってコンパイルせよ．


![ap2022_lecture04 drawio](https://user-images.githubusercontent.com/17545828/160493061-22b0be9c-380a-4408-90c5-e79b75e16492.png)
