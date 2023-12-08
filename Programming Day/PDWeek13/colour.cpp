#include <iostream>

// ANSI escape codes for text color
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"

int main() {
    std::cout << "This is regular text." << std::endl;

    // Change the color for a specific cout
    std::cout << RED << "This is red text." << RESET << std::endl;

    std::cout << "This is regular text again." << std::endl;

    // Another colored text
    std::cout << GREEN << "This is green text." << RESET << std::endl;

    return 0;
}