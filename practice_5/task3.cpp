#include <iostream>
#include <cmath>
using namespace std;

double f(double x) {
    return 5 * pow(x, 3) + sqrt(-x + 6);
}

int main() {
    double a, b, c;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    cout << "-------------------" << endl;
    cout << ": X : Y :" << endl;
    cout << "-------------------" << endl;

    if (c <= 0) {
        cout << "Step size (c) should be greater than zero." << endl;
        return 1;
    }

    for (double x = a; x <= b; x += c) {
        if (x < a || x > b) {
            cout << "Value x does not belong to the domain of the function." << endl;
            break;
        }
        double y = f(x);
        cout << ": " << x << " : " << y << " :" << endl;
    }

    cout << "-------------------" << endl;

    return 0;
}