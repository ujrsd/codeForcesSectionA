#include <iostream>

int main() {
    unsigned int amountOfStones = 1;
    std::string colorCodeOfStones = "";
    std::cin >> amountOfStones;
    std::cin >> colorCodeOfStones;

    if(amountOfStones >= 1 && amountOfStones <= 50) {
        char currentChar = colorCodeOfStones[0];
        unsigned int counter = 0;
        for(int i = 1; i < amountOfStones; i++) {
            if(currentChar == colorCodeOfStones[i])
                counter ++;

            currentChar = colorCodeOfStones[i];
        }

        std::cout << counter << std::endl;
    } else {
        std::cout << "ERROR: Invalid amount of stones!" << std::endl;
    }
}