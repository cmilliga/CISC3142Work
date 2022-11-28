#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

bool checkValidLine(const vector<string> &line){
  //two elements from wordsThisLine
  if(line.size()!=2)
    return false;

  //match month abbrevs
  string month = line[0];
  bool monthIsValid = false;
  if(month == "Jan" ||
     month == "Feb" ||
     month == "Mar" ||
     month == "Apr" ||
     month == "May" ||
     month == "Jun" ||
     month == "Jul" ||
     month == "Aug" ||
     month == "Sep" ||
     month == "Oct" ||
     month == "Nov" ||
     month == "Dec")
    monthIsValid = true;
  if(!monthIsValid)
    return false;

  //can second element be a pos int
  string temp = line[1];
  bool tempIsValid = false;
  try{
    int it = stoi(temp);
    tempIsValid = true;
  }catch (const exception&e){
    cout << e.what() << endl;
  }
  if(!tempIsValid)
    return false;

  return true;
}

int main(){
  vector <vector<string> > weatherData;
  ifstream inputFileWeatherData("weather.csv.txt");
  string currentLine;

  while(getline(inputFileWeatherData, currentLine)){
    //read in lines from file and check for valid input
    
    string currentWord;
    vector <string> wordsThisLine;
    istringstream currentLineStream(currentLine);

    while(getline(currentLineStream,currentWord, ',')){
     //tokenize lines, isolate temperatures and put into vector
	wordsThisLine.push_back(currentWord);
    }
    if(checkValidLine(wordsThisLine))
      weatherData.push_back(wordsThisLine);
  }

  vector <int> temperatureData;
  
  for (auto&line: weatherData){
    temperatureData.push_back(stoi(line[1]));
  }

  ofstream weatherAverageOutputStream("Weather_Averages_Output.txt");

  //Simple Average
  int sumOfTemps;
  for (auto&temperature : temperatureData)
    sumOfTemps += temperature;
  double dSimpleAverage = static_cast<double>(sumOfTemps)/static_cast<double>(temperatureData.size());
  weatherAverageOutputStream << "Simple Average: " << dSimpleAverage << endl;
  
  //Moving Average
  weatherAverageOutputStream << "Moving Average: " << endl;
  for (int i = 2; i<temperatureData.size(); i++){
    double currentTemp = static_cast<double>(temperatureData[i]);
    double previousTemp = static_cast<double>(temperatureData[i-1]);
    double previousPreviousTemp = static_cast<double>(temperatureData[i-2]);
    double movingAverage = (currentTemp+previousTemp+previousPreviousTemp)/3.0;
    
    weatherAverageOutputStream << weatherData[i][0] << ": " << movingAverage << endl;
  }
  
  //Weighted Average
  weatherAverageOutputStream << "Weighted Average: " << endl;
  for (int i = 2; i<temperatureData.size(); i++){
    double currentTemp = static_cast<double>(temperatureData[i]);
    double previousTemp = static_cast<double>(temperatureData[i-1]);
    double previousPreviousTemp = static_cast<double>(temperatureData[i-2]);
    double weightedAverage = (currentTemp*3+previousTemp*2+previousPreviousTemp)/6.0;
    
    weatherAverageOutputStream << weatherData[i][0] << ": " << weightedAverage << endl;
  }


	  
  return 0;
}
