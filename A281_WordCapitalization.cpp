// Includes
#include <iostream>

// Main programm 
int main() {
    std::string word = "";
    std::cin >> word;

    word[0] = std::toupper(static_cast<unsigned char>(word[0]));

    std::cout << word << std::endl;
}