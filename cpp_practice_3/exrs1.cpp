#include <iostream>

int main() {
    int N;
    
    std::cout << "Enter a three-digit positive number: ";
    std::cin >> N;
    
    if (N >= 100 && N <= 999) {
        int product = 1;
        
        while (N > 0) {
            int digit = N % 10;
            if (digit % 2 != 0) {
                product *= digit;
            }
            N /= 10;
        }
        
        std::cout << "Product of odd numbers:" << product << std::endl;
    } else {
        std::cout << "The entered number is not a three-digit number." << std::endl;
    }

    return 0;
}