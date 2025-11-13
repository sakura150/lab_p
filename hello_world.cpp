#include <iostream>
#include <string>

// The main function of the program
int main() {
    // Get user's name
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello world from " << name << std::endl;
    return 0;
}