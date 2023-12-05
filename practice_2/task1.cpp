#include <iostream>
#include <cmath> 
using namespace std; 

int main()
{
    int x;
    int y;
    double w;

    cout << "Enter x value:";
    cin >> x;
    cout << "Enter y value:";
    cin >> y;

    if (x >= 0) {
        w = exp(-x) * tan(1.0 / pow(x, 2) + 8.2);
    }
    else {
        w = x * (0.32 * x + 2.5 / pow(x, 2) + 3); 
    }

    cout << "Result: " << w ;

    return 0;
}
  