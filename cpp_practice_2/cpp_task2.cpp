#include <iostream>
#include <string>
using namespace std;
int main() 
{
  double x, y;
  cout << "Enter x value: ";
  cin >> x;
  cout << "Enter y value: ";
  cin >> y;
  
  if ((x<=x+y && x+y<=3 && x>=0 && y<=x+y && y>=0) || (x==1.5 && y==1.5)){
      cout<<"Win!";
  }
  else{cout<<"Lose!"; }
  
}