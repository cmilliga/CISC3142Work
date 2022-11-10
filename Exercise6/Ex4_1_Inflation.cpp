#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  double cost;
  int years;
  double rate;

  cout << "Please enter cost in dollars: "; 
  cin >> cost;
  cout << "Please enter years: ";
  cin >> years;
  cout << "Please enter inflation rate: ";
  cin >> rate;

  double finalRate = rate/100.0;

  for(int i=0; i<years; i++){
  	double costAddition = cost*finalRate;
	cost += costAddition;
  }

  cout << "The final price adjusted for inflation over " << years;
  cout << " is " << fixed << setprecision(2) <<  cost << " dollars."<< endl;
}
