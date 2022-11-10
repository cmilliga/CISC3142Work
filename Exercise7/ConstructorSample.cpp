#include <iostream>

class Sample {
private:
  int x;
  double y;

public:
  Sample(){
    x = 0;
    y = 0;
  } //Constructor1
  Sample(int n1){
    y = 0;
    x = n1;
  }  //Constructor2
  Sample(int n1,int n2){
    x = n1;
    y = n2;
  } //Constructor3
  Sample(int i1, double d2){
    x = i1;
    y = d2;
  } //Constructor4

};

int main(){


}
