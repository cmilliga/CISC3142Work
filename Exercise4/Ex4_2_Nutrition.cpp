#include <iostream>
using namespace std;

int main(){

  while(true){
  double goalWeight;
  string userResponse;
  cout << "Plesae enter your goal weight in grams or q to quit: ";
  cin >> userResponse;
  
  if(userResponse == "q")
    break;
  
  goalWeight = stod(userResponse);
  
  double sweetnerToKill = goalWeight/7.0;
  double cansToKill = sweetnerToKill/0.35;

  cout << "The number of cans of pop needed to kill your friend at ";
  cout << goalWeight << " grams is " << cansToKill << " cans." << endl;
  }
}
