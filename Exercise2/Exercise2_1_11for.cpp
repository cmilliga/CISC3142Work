#include <iostream>
int main(){
  int v1; int v2;
  std::cout << "Please provide two integer values: " << std::endl;
  std::cin >> v1 >> v2;
  for (v1; v1 <= v2; v1++){
    std::cout << "\n" << v1;
  }
}
