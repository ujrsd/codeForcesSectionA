#include <iostream>

int main() {
    std::string formation = "";
    std::cin >> formation;
    unsigned int counter = 0;
    bool checkForZeros = true;

    for(char c : formation) {
        if(counter == 7)
            break;

        if(checkForZeros) {
            if(c == '0') {
                counter++;
            } else {
                counter = 1;
                checkForZeros = false;
            }
        } else {
            if(c == '1') {
                counter++;
            } else {
                counter = 1;
                checkForZeros = true;
            }
        }
    }

    if(counter == 7)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;
}