#include <iostream>

int main() {
    unsigned int number = 1;
    std::cin >> number;
    
    if(number >= 1 && number <= 150) {
        std::string text = "";
        int result = 0;
        while(number != 0) {
            std::cin >> text;
            if(text == "X++" || text == "++X") {
                result++;
            } else if(text == "X--" || text == "--X") {
                result--;
            } else {
                std::cout << "ERROR: Invalid Input given, only '++X' 'X++' '--X' and 'X--' are allowed!" << std::endl;
            }
            number--;
        }
        std::cout << result << std::endl;
    } else {
        std::cout << "Number is " << number << " but out of range" << std::endl;
        std::cout << "Range: 1 <= n <= 150" << std::endl;
    }
}