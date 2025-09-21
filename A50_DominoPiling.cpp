#include <iostream>

int main() {
    unsigned int length = 1, width = 1;
    std::cin >> length >> width;

    if(length >= 1 && width >= 1 && length <= 16 && width <= 16) {
        unsigned int boardArea = length*width;

        // No checks ar needed, because only if the length and width are odd, you get one square without a domino.
        // But dividing an int number by two will round down by default because int cannot handle any comma numbers.
        std::cout << boardArea/2 << std::endl;
    } else { 
        std::cout << "ERROR: Unallowed board size." << std::endl;
    }
}