#include <iostream>
#include <fstream>
#include <algorithm>
#include <sstream>
#include <vector>
#include <string>
#include <numeric>
using namespace std;

bool sortByPopularity(const vector<string> &a, const vector<string> &b){
  string popularityA = a[7];
  string popularityB = b[7];
  int iA, iB;

  if (popularityA=="")
    iA = 0;
  else
    iA = stoi(popularityA);

  if (popularityB=="")
    iB = 0;
  else
    iB = stoi(popularityB);
  
  return (iA > iB);
} 

bool checkValidLine(const vector<string> &line){
  //validating line size
  if(line.size()<1)
    return false;

  //checking for convertible int
  string year = line[0];
  bool yearIsValid = false;
  try{
    int it = stoi(year);
    yearIsValid = true;
  }catch (const exception&e){
    //silently swallow this exception
  }
  return yearIsValid;
}

int main(){
  //read in all data using fstream and getline, looping across csv file
  //read into vectors for each category (could do paralell vectors)
  //creating paralell vectors
  vector <vector<string> > movieData;
  ifstream inputFileMovieData("film.csv.txt");
  string currentLine;

  while(getline(inputFileMovieData, currentLine)){
    
    string currentWord;
    vector <string> wordsThisLine;
    istringstream currentLineStream(currentLine);

    while(getline(currentLineStream, currentWord, ';')){
      
      wordsThisLine.push_back(currentWord);
     
    }
    if(checkValidLine(wordsThisLine))
      movieData.push_back(wordsThisLine);
  }

  vector <int> movieLength;
  vector <string> movieTitle;
  vector <int> movieYear;
  vector <string> movieActress;
  vector <string> movieSubject;


  for (auto&line: movieData){
    if (line[1]=="")
      movieLength.push_back(0);
    else
      movieLength.push_back(stoi(line[1]));
  }
  for (auto&line: movieData){
    movieYear.push_back(stoi(line[0]));
  }
  for (auto&line: movieData){
    movieTitle.push_back(line[2]);
  }
  for (auto&line: movieData){
    movieActress.push_back(line[5]);
  }
  for (auto&line: movieData){
    movieSubject.push_back(line[3]);
  }

  ofstream movieDataOutputStream("Movie_Data_Output.txt");

  //use accumulate on vector of length to sum length
  //create iterators for beginning to end of accumulate
  int sumOfMovieLengths = accumulate(movieLength.begin(), movieLength.end(), 0);
  movieDataOutputStream << "Sum of Movie Lengths: " << sumOfMovieLengths << endl;

  //take vector holding popularity then use sort()
  // sort(v.begin(),v.end(), customSortFunction)
  vector <vector<string> > copyMovieData(movieData);
  sort(copyMovieData.begin(), copyMovieData.end(), sortByPopularity);
  for(auto&line: copyMovieData){
    movieDataOutputStream << "Movie Title: " << line[2] << ", Popularity: " << line[7] << endl;
  }

  //use find on a few categories: title (string), actor (string
  //will take two iterators and the val to find
  //find(vec.cbegin(),vec.cend(),val) for all three corresponding vectors
  auto iterActress = find(movieActress.begin(), movieActress.end(), "Alexander, Denise");
  int iActress = distance(movieActress.begin(), iterActress);
  movieDataOutputStream << "Actress: " << *iterActress << ", starring in: " << movieTitle[iActress] << endl;

  //take movieData vector of vector<string> and separate out Comedy and Action films into new
  //vector of vector<string>. Then isolate just the release year for the new Comedy and Action vectors.
  //Then change those year strings into integers. Use unique algorithm on both to remove duplicates.
  //Then use equal to compare both lists to determine if at least one Comedy and one Action was made in
  //each corresponding year.
  vector <vector<string> > comedyMovieData;
  vector <vector<string> > actionMovieData;

  for(auto&line: movieData){
    if(line[3]=="Action")
      actionMovieData.push_back(line);
    else if(line[3]=="Comedy")
      comedyMovieData.push_back(line);
  }

  vector<int> comedyMovieYear;
  for (auto&line: comedyMovieData){
    comedyMovieYear.push_back(stoi(line[0]));
  }
  
  vector<int> actionMovieYear;
  for (auto&line: actionMovieData){
    actionMovieYear.push_back(stoi(line[0]));
  }

  sort(comedyMovieYear.begin(), comedyMovieYear.end());
  sort(actionMovieYear.begin(), actionMovieYear.end());
  
  auto comedyEndUnique = unique(comedyMovieYear.begin(), comedyMovieYear.end());
  auto actionEndUnique = unique(actionMovieYear.begin(), actionMovieYear.end());

  comedyMovieYear.erase(comedyEndUnique, comedyMovieYear.end());
  actionMovieYear.erase(actionEndUnique, actionMovieYear.end());

  bool comedyActionYearSame = equal(actionMovieYear.begin(), actionMovieYear.end(), comedyMovieYear.begin());

  movieDataOutputStream << "Action and Comedy years are equal: " << (comedyActionYearSame? "True" : "False") << endl;

  //Sanity Check, comparing a vector to itself to ensure we're using equal properly

  bool sanityCheck = equal (comedyMovieYear.begin(), comedyMovieYear.end(), comedyMovieYear.begin());

  movieDataOutputStream << "Sanity check, is comedy equal to comedy, the eternal question: " << (sanityCheck? "True" : "False") << endl;

}
