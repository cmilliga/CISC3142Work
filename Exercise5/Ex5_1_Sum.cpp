#include<iostream>
using namespace std;

    int digitSum(int num){
      int sum = 0;
      while (num != 0){
	sum = sum + num % 10;
	num = num / 10;
      }
      return sum;
    }

int main(){
  int input;
  while(cin>>input){
    cout<< "Sum of digits of the number "<< input << " is: ";
    cout << digitSum(input) << endl;  
  }
  return 0;
}
