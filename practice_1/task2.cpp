#include <iostream>
#include <string>
#include <math.h>
#define _USE_MATH_DEFINES


int main()
{
  int a = 3;
  double b = 0.521;
 
 double result = 0;
 result = (sqrt(3) * ((0.127 * (M_E*(b/a)))/(1-(sqrt(3)*(cos((b/a)*M_PI)))))*((0.127 * (M_E*(b/a)))/(1-(sqrt(3)*(cos((b/a)*M_PI))))));
 std:: cout << result;
}