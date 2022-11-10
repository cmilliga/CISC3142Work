#include <iostream>
#include <vector>
#include <numeric>
#include <iomanip>
using namespace std;

int main(){
  double temp;
  vector<double> xvals;
  vector<double> yvals;
  bool isX = true;

  while(cin>>temp){
    if (isX)
      xvals.push_back(temp);
    else
      yvals.push_back(temp);
    isX = !isX; 
  }

  if (xvals.size()>yvals.size()) //getting rid of mismatch xval and yval
    xvals.pop_back();
  
  double xBar = accumulate(xvals.begin(), xvals.end(), 0.0) / xvals.size();
  double yBar = accumulate(yvals.begin(), yvals.end(), 0.0) / yvals.size();
  
  vector<double> xMinusXBarSquared;
  for (double x : xvals){
    double xMinusXBar = x - xBar;
    xMinusXBarSquared.push_back(xMinusXBar * xMinusXBar);
  }
  double sumXMinusXBarSquared = accumulate(xMinusXBarSquared.begin(),
					   xMinusXBarSquared.end(), 0.0);

  int np = xvals.size();
  vector<double> xDiffYDiffProd;
  for (int ip = 0; ip<np; ip++){
    double x = xvals[ip];
    double y = yvals[ip];
    double xDiff = x-xBar;
    double yDiff = y-yBar;
    double diffProd = xDiff * yDiff;
    xDiffYDiffProd.push_back(diffProd);
  }
  double sumXDiffYDiffProd = accumulate(xDiffYDiffProd.begin(),
					xDiffYDiffProd.end(),
					0.0);

  double b1 = sumXDiffYDiffProd/sumXMinusXBarSquared;
  double b0 = yBar - b1 * xBar;
  
  cout << std::fixed;
  cout << std::setprecision(2);
  cout << "y = " << b0 << " + " << b1 << "x" << endl;  

  return 0;
}
