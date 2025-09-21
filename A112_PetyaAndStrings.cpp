#include <iostream>

int main() {
    std::string firstLine, secondLine;
    std::cin >> firstLine >> secondLine;

    for(char &c : firstLine) {
        c = std::tolower(static_cast<unsigned char>(c));
    }

    for(char &c : secondLine) {
        c = std::tolower(static_cast<unsigned char>(c));
    }

    if(firstLine == secondLine) {
        std::cout << "0";
    } else if(firstLine < secondLine) {
        std::cout << "-1";
    } else {
        std::cout << "1";
    }
}