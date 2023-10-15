#include <iostream>

int main() {
    int N;
    std::cout << "Enter a natural number N: ";
    std::cin >> N;

    int number = 1;

    while (N > 0) {
        int digit = N % 10;

        if (digit != 7) {
            number *= digit; 
        }

        N /= 10; 
    }

    std::cout << "Product of digits not equal to 7: " << number << std::endl;

    return 0;
}
