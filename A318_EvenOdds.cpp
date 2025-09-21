#include <iostream>
#include <vector>

// Second error is a problem with the value range: 10^12 exceeds the 32-Bit limit
// Therefore a 64-Bit integer is needed
#include <cstdint>

int main() {
    uint64_t number = 0, position = 0, counter = 0, odd = 1;
    std::cin >> number >> position;

    // Problem: number/2+1 is wrong if number is even
    if(number%2 == 0){
        //std::cout << "Result will be even" << std::endl;
        if(position > number/2) {
            std::cout << (position-(number/2))*2 << std::endl;
        } else {
            std::cout << 1+(position-1)*2 << std::endl;
        }
    } else {
        //std::cout << "Result will be odd" << std::endl;
        if(position > number/2+1) {
            std::cout << (position-(number/2+1))*2 << std::endl;
        } else {
            std::cout << 1+(position-1)*2 << std::endl;
        }
    }
    
}