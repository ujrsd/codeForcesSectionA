#include <iostream>
#include <string>
#include <vector>

int main() {
    // Inputs
    std::string numberAsText = "1"; // 1 <= n <= 1000
    std::cin >> numberAsText;

    // Logic
    // Check if is a lucky number (only contains 4's or 7's)
    bool isLuckyNumber = true;
    std::string result = "NO";
    for(char c : numberAsText) {
        if(c != '4' && c != '7') {
            isLuckyNumber = false;
            break;
        }
    }

    // Check for almost lucky (is divisible by 4 or 7)
    if(!isLuckyNumber) {
        unsigned int number = stoi(numberAsText);
        std::vector<unsigned int> luckyNumbers = {4, 7, 47, 74, 447, 474, 744, 747, 774, 777};
        for(unsigned int luckyNumber : luckyNumbers) {
            if(number%luckyNumber == 0) {
                isLuckyNumber = true;
                break;
            }
        }
    }

    if(isLuckyNumber)
        result = "YES";
    
    // Outputs
    std::cout << result << std::endl;
}

// Error on the following test case:
/*
    == Test Nr. 26 ==
    Input : 799
    Output: NO
    Answer: YES
    Solution: Missunderstanding of the question, if the number is divisible by a lucky number, then it is almost a lucky number.
      This means, 799 is divisible by 47, therefor it is an almost lucky number. Because the number is limited to 1 too 1000, a
      vector can be created: {4, 7, 47, 74 ..., 774} but this is a "dirty" solution.
*/