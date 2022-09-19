#include <iostream>
int main(){
  int n1; 
  int n2;
  std::cout << "Provide two intergers: ";
  std::cin >> n1 >> n2;
  while (n1 <= n2){
    std::cout << n1 <<  " ";
    n1++;
  }

  return 0;
}
