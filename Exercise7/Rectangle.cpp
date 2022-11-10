#include <iostream>
using namespace std;

struct Rectangle{
private:
  double length;
  double width;

public:
  void setlength(double l){
    length = l;
  }
  void setwidth(double w){
    width = w;
  }
  double perimeter(){
    double perim = (2*width)+(2*length); 
    return perim;
  }
  double area(){
    double area = width*length;
    return area;
  }
  void show(){
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
  }
  int sameArea(Rectangle Rect){
    if ((length*width)==(Rect.length*Rect.width)){
      return 1;
      cout << "Area is equal" << endl;
    }
    else{
      return 0;
      cout << "Area is not equal" << endl;
    }
  }
};

int main() {
  Rectangle rectOne;
  Rectangle rectTwo;

  rectOne.setlength(5.0);
  rectOne.setwidth(2.5);
  rectTwo.setlength(5.0);
  rectTwo.setwidth(18.9);
  rectOne.show();
  cout << "Area of Rectangle one is: " << rectOne.area() << endl;
  cout << "Perimeter of Rectangle one is: " << rectOne.perimeter() << endl;
  rectTwo.show();
  cout << "Area of Rectangle two is: " << rectTwo.area() << endl;
  cout << "Perimeter of Rectangle two is: " << rectTwo.perimeter() << endl;

  rectOne.sameArea(rectTwo);

  rectOne.setlength(15.0);
  rectOne.setwidth(6.3);
  rectOne.show();
  cout << "Area of Rectangle one is: " << rectOne.area() << endl;
  cout << "Perimeter of Rectangle one is: " << rectOne.perimeter() << endl;
  rectTwo.show();
  cout << "Area of Rectangle two is: " << rectTwo.area() << endl;
  cout << "Perimeter of Rectangle two is: " << rectTwo.perimeter() << endl;
  

  rectOne.sameArea(rectTwo);

  return 0;
}
