#include <iostream>

int main() {
    int sum = 0;

    for (int i = 1; i <= 25; ++i) {
        sum += i * i;
    }

    std::cout << "Sum of squares of numbers from 1 to 25: " << sum << std::endl;

    return 0;
}