#include <iostream>
#include <cstdint>

int main() {
    // Inputs
    uint64_t length = 1, width = 1, squareWidth = 1; // 1 <= n, m, a <= 10^9
    std::cin >> length >> width >> squareWidth;

    // Logic
    uint64_t amountSquaresLength = length/squareWidth + (length%squareWidth != 0 ? 1 : 0);
    uint64_t amountSquaresWidth = width/squareWidth + (width%squareWidth != 0 ? 1 : 0);
    uint64_t result = amountSquaresLength*amountSquaresWidth;
    //std::cout << "amountSquaresLength=" << amountSquaresLength << "  amountSquaresWidth=" << amountSquaresWidth << std::endl;

    // Outputs
    std::cout << result << std::endl;
}

// Error on the following test case:
/*
    == Test Nr. 9 ==
    Input : 1000000000 1000000000 1
    Output: 2808348672
    Answer: 1000000000000000000
    Solution: This looks like the problem, that 'unsigned int' is only a 32-Bit number. 2^32 =~ 4.3*10^9, but n can be 10^9, that squared results in 10^18
      Converting all number to a 64-Bit unsigned number.
    -> Fixed the problem.
*/