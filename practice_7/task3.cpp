#include <iostream> 
 
int main() { 
    int n; 
 
    std::cout << "Enter a natural number: "; 
    std::cin >> n; 
 
    while (n <= 1) { 
        std::cout << "Entered number is not valid. Enter a natural number greater than 1: "; 
        std::cin >> n; 
    } 
 
    const int MAX_N = 20; 
 
 
    while (n > MAX_N) { 
        std::cout << "Entered number is too large for display. The maximum allowed value will be used: " << MAX_N << std::endl; 
        std::cout << "Enter a natural number(max 20): "; 
        std::cin >> n; 
 
    } 
 
    std::cout << '+'; 
    int i = 0; 
    while (i < n) { 
        std::cout << '-'; 
        i++; 
    } 
    std::cout << '+' << std::endl; 
 
    i = 0; 
    while (i < n) { 
        std::cout << '|'; 
        int j = 0; 
        while (j < n) { 
            std::cout << ' '; 
            j++; 
        } 
        std::cout << '|' << std::endl; 
        i++; 
    } 
 
    std::cout << '+'; 
    i = 0; 
    while (i < n) { 
        std::cout << '-'; 
        i++; 
    } 
    std::cout << '+' << std::endl; 
 
    return 0; 
}