#include <iostream>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
  string input;

  vector<string> svec;

  while(cin >> input){
    svec.push_back(input);

    for(auto& rows : svec){
      for(auto& element : rows){
	element = toupper(element);
      }
    }
  }
  
  int wordsSoFar = 0;

  for(auto word : svec){
    if(wordsSoFar >= 8){
      cout << endl;
      cout << word;
      wordsSoFar = 1;
    }else{
      cout << word;
      wordsSoFar++;
    }
  }

}
