#include <iostream>
#include <vector>
#include <cstdint>

// Print all values of a vector
template <typename T>
void printVector(const std::vector<T>& values) {
    std::cout << "Values of vector: ";
    for(const T& value : values) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Inputs
    unsigned int amountTestCases = 1;
    std::vector<uint64_t> values;

    std::cin >> amountTestCases;
    values.resize(amountTestCases);

    for(int i = 0; i < values.size(); i++) {
        std::cin >> values[i];
    }

    // Logic
    /*
        Idea:
        - First Idea: Check by looping from 3 up to the value to be checked -> Problem: Very huge numbers with no odd divider take a lot of processing time
        - Second Idea: Check if value is odd, odd numbers are always dividable by themself, which is a odd divider
        - Looked up: Problem with 2^n numbers, they can be checked by comparing a bitwise operation, example:
            2^5 = 10000 and 2^5-1 = 01111 now 2^5 AND-OPERATION 2^5-1 = 10000 & 01111 = 00000
            when the result is bit stream of 0's, it can be divided by 2 until the resulting number is an odd number
        -> For some reason, the bitwise operation doesn't work, dividing by 2 will be considered
    */

    std::vector<std::string> res(amountTestCases, "NO");
    //printVector(values);
    //printVector(res);

    for(int i = 0; i < values.size(); i++) {
        // Check if is a odd number & not a power of 2
        if(values[i]%2 == 1) {
            res[i] = "YES";
            continue;
        } else {
            uint64_t valueToCheck = values[i];
            while(valueToCheck%2 == 0) {
                valueToCheck/=2;
            }

            if(valueToCheck%2 == 1 && valueToCheck != 1) {
                res[i] = "YES";
            }
        }
    }
    //printVector(res);

    // Outputs
    //std::cout << "Logic part finished" << std::endl; // Debug line to see if code reaches Outputs part
    for(std::string word : res) {
        std::cout << word << " ";
    }
    std::cout << std::endl;
}