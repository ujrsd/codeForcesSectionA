#include <iostream>
#include <cctype>

int main() {
    std::string input = "";
    std::cin >> input;

    bool isExcecuting = false;

    for(char c : input) {
        // '+' doesn't lead to an excecution, because it only increments the value stored
        // in the internal accumulator.
        if(c == 'H' || c == 'Q' || c == '9')
            isExcecuting = true;
    }

    if(isExcecuting)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;
}