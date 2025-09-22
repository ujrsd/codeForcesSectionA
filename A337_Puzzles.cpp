#include <iostream>
#include <vector>

// Code from utils.cpp 

// Bubble sort - Pass by reference to avoid copying the vector
template <typename T>
void sortVector(std::vector<T>& values) {
    unsigned int bestPosition = 0, bestValue = 0, oldValue = 0;
    for(int i = 0; i < values.size(); i++) {
        for(int j = 0; j < values.size()-i; j++) {
            if(bestValue < values[j]) {
                bestPosition = j;
                bestValue = values[j];
            }
        }
        values[bestPosition] = values[values.size()-1-i];
        values[values.size()-1-i] = bestValue;
        bestValue = 0;
    }
}

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
    unsigned int amountStudents = 2, amountPuzzels = 2; // 2 is the minimum: 2 <= n <= m <= 50
    std::vector<unsigned int> puzzlePiecesPerSet;

    std::cin >> amountStudents >> amountPuzzels;
    puzzlePiecesPerSet.resize(amountPuzzels);

    for(int i = 0; i < puzzlePiecesPerSet.size(); i++) {
        std::cin >> puzzlePiecesPerSet[i];
    }

    // Logic
    /*
        Idea:
        - sort by increasing puzzle pieces (This should secure the Minimum value for this problem)
        - Distance between two numbers is the amount of Students
        - Calc all MaxPieces - MinPieces an return minimum
    */
    sortVector(puzzlePiecesPerSet);
    //printVector(puzzlePiecesPerSet);
    
    unsigned int difference = 0, saveSmallestDifference = -1; // '-1' to have an underflow to get the variable to the max value of unsigned int
    //std::cout << "saveSmallestDifference= " << saveSmallestDifference << std::endl;
    for(int i = 0; i <= puzzlePiecesPerSet.size()-amountStudents; i++) {
        difference = puzzlePiecesPerSet[i+amountStudents-1] - puzzlePiecesPerSet[i];
        if(difference < saveSmallestDifference)
            saveSmallestDifference = difference;
        //std::cout << i << ": difference= " << difference << std::endl;
    }

    // Outputs
    //std::cout << "Logic part finished" << std::endl; // Debug line to see if code reaches Outputs part
    std::cout << saveSmallestDifference << std::endl;
}