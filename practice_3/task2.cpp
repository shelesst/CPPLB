#include <iostream>
#include <string>

int main() {
    char firstLetter;

    std::cout << "Enter the first letter of the country's name: ";
    std::cin >> firstLetter;

    switch (firstLetter) {
        case 'A':
        case 'a':
            std::cout << "Country: Australia\nCapital: Canberra\nPopulation: 25.4 million" << std::endl;
            break;

        case 'C':
        case 'c':
            std::cout << "Country: United States of America\nCapital: Washington\nPopulation: 331.4 million" << std::endl;
            break;

        case 'K':
        case 'k':
            std::cout << "Country: Ukraine\nCapital: Kyiv\nPopulation: 43.0 million" << std::endl;
            break;

        case 'B':
        case 'b':
            std::cout << "Country: Brazil\nCapital: Brasília\nPopulation: 214.3 million" << std::endl;
            break;

        case 'F':
        case 'f':
            std::cout << "Country: France\nCapital: Paris\nPopulation: 67.0 million" << std::endl;
            break;

        case 'G':
        case 'g':
            std::cout << "Country: Germany\nCapital: Berlin\nPopulation: 83.2 million" << std::endl;
            break;


        case 'J':
        case 'j':
            std::cout << "Country: Japan\nCapital: Tokyo\nPopulation: 126.5 million" << std::endl;
            break;

        default:
            std::cout << "Country with such a first letter was not found." << std::endl;
            break;
    }

    return 0;
}