#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "Please enter your name: "; // Изменили текст
    std::cin >> name;
    std::cout << "Greetings from " << name << "!" << std::endl;
    return 0;
}
