#include "utils.h"

// Print all values of a vector
template <typename T>
void printVector(const std::vector<T>& values) {
    std::cout << "Values of vector: ";
    for(const T& value : values) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
}

// Print all values of a matrix
template <typename T>
void printMatrix(const std::vector<std::vector<T>>& matrix) {
    std::cout << "Matrix = " << std::endl;
    for(const std::vector<T>& row : matrix) {
        std::cout << " ";
        for(const T& value : row) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }
}

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