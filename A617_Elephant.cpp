#include <iostream>

int main() {
    unsigned int housePosition = 1;
    std::cin >> housePosition;

    if(housePosition >= 1 && housePosition <= 1000000) {
        unsigned int result = 0;
        if(housePosition%5 == 0)
            result = housePosition/5;
        else
            result = housePosition/5 + 1;

        std::cout << result << std::endl;

    } else {
        std::cout << "ERROR: The friends house is too far away!" << std::endl;
    }
}