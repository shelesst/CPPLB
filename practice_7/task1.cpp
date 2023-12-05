#include <iostream> 
 
int main() { 
     
    std::cout << "Enter a natural number: "; 
    int c0; 
    std::cin >> c0; 
 
    
    int steps = 0; 
 
     
    while (c0 != 1) { 
        if (c0 % 2 == 0) { 
             
            c0 /= 2; 
        } else { 
           
            c0 = 3 * c0 + 1; 
        } 
 
         
        steps++; 
        std::cout << c0 << std::endl; 
    } 
 
     
    std::cout << "Number of steps: " << steps << std::endl; 
 
    return 0; 
}