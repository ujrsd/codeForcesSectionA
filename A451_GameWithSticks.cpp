#include <iostream>
#include <vector>

int main() {
    // Inputs
    unsigned int height = 1, width = 1; // 1 <= n, m <= 100
    std::cin >> height >> width;

    // Logic
    /*
        Idea:
        - First Idea: Draw the board with a matrix filled with ones. But there the solution appeared. When removing an intersection,
          it's the same as removing one row or column independent of the position. The amount of rounds will only be the smallest dimension
          of the grid
        - Get the amount of turns that will be played
        - Akshat begins, so Akshat will only win if the amount of turns is odd
    */
    unsigned int numberOfTurns = 0;

    numberOfTurns = height < width ? height : width;
    std::string winner = numberOfTurns%2 == 1 ? "Akshat" : "Malvika";

    // Outputs
    std::cout << winner << std::endl;
}