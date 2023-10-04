#include <iostream>
#include <cmath>

int main() {
    double x, y;

    std::cout << "Enter five different values of x:" << std::endl;

    for (int i = 0; i < 5; ++i) {
        std::cin >> x;
        y = pow(sin(0), 5) * x + fabs(5 * x - 1.5);
        std::cout << "Value for x = " << x << ": " << y << std::endl;
    }

    return 0;
}
