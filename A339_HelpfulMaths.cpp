#include <iostream>
#include <string>

int main() {
    std::string calculation = "";
    std::cin >> calculation;

    std::string result = "";

    for(int i = 1; i <= 3; i++) {
        unsigned int counter = 0;
        // Find first Position of number i
        std::size_t found = calculation.find(std::to_string(i));
        //std::cout << i << ": found= " << found << std::endl;
        
        // If found already npos, skip, elswise start counting how often number i is present
        while(found != std::string::npos) {
            counter++;
            found = calculation.find(std::to_string(i), found+1);
            //std::cout << i << ": found= " << found << std::endl;
        }

        // Build result by adding parts of the result up
        for(int j = 0; j < counter; j++) {
            result += std::to_string(i) + "+";
        }
    }

    result.pop_back();
    std::cout << result << std::endl;
    
}