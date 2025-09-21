#include <iostream>

int main() {
    unsigned int weightLimak = 1, weightBob = 1;
    std::cin >> weightLimak >> weightBob;

    if(weightLimak <= weightBob) {
        unsigned int counter = 0;
        while(weightLimak <= weightBob) {
            weightLimak *= 3;
            weightBob *= 2;
            counter++;
        }
        std::cout << counter << std::endl;
    } else {
        std::cout << "ERROR: Weight of Limak is larger than Bob's weight! Not allowed." << std::endl;
    }
}