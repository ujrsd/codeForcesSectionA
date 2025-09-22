#include <iostream>
#include <vector>

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

unsigned int getHighestColumn(const std::vector<unsigned int>& values) {
    unsigned int res = 0;
    for(const unsigned int value : values) {
        if(res < value)
            res = value;
    }
    return res;
}

int main() {
    unsigned int columns = 1, columnHeight = 1;
    std::vector<unsigned int> cubesPerColumns;

    std::cin >> columns;
    cubesPerColumns.resize(columns);

    for(int i = 0; i < cubesPerColumns.size(); i++) {
        std::cin >> cubesPerColumns[i];
    }
    //printVector(cubesPerColumns);
    columnHeight = getHighestColumn(cubesPerColumns);
    //std::cout << "maximalRows= " << columnHeight << std::endl;

    std::vector<std::vector<unsigned int>> cubeMatrix(columnHeight, std::vector<unsigned int>(columns));

    // Example print of a pre defined matrix
    /*
    std::vector<std::vector<unsigned int>> matrix = {
        {1,2,3},
        {3,4,5},
        {7,8,9}
    };
    printMatrix(matrix);
    */

    //std::cout << "cubeMatrix.size()= " << cubeMatrix.size() << std::endl;
    //std::cout << "cubeMatrix[0].size()= " << cubeMatrix[0].size() << std::endl;

    for(int i = 0; i < columns; i++) {
        int counter = cubesPerColumns[i];
        for(int j = 0; j < columnHeight; j++) {
            if(counter > 0) {
                cubeMatrix[columnHeight-1-j][i] = 1;
                //std::cout << "(" << columnHeight-1-j << "," << i << ") = " << 1 << std::endl;
            } else {
                cubeMatrix[columnHeight-1-j][i] = 0;
                //std::cout << "(" << columnHeight-1-j << "," << i << ") = " << 0 << std::endl;
            }
            counter--;
        }
    }

    printMatrix(cubeMatrix);

    // Gravity move
    for(int i = 0; i < cubeMatrix.size(); i++) {
        unsigned int counter = 0;
        for(int j=0; j < cubeMatrix[i].size(); j++) {
            if(cubeMatrix[i][j] == 1)
                counter++;
            
            cubeMatrix[i][j] = 0;
        }

        for(int j=0; j < counter; j++) {
            cubeMatrix[i][cubeMatrix[i].size()-1-j] = 1;
        }
    }
    //std::cout << "Matrix after Gravity move" << std::endl;
    printMatrix(cubeMatrix);

    // Count '1's per column
    std::vector<unsigned int> result(columns);

    for(int i = 0; i < cubeMatrix[0].size(); i++) {
        unsigned int counter = 0;
        for(int j = 0; j < cubeMatrix.size(); j++) {
            if(cubeMatrix[j][i] == 1)
                counter++;
        }
        result[i] = counter;
    }

    //printVector(result);

    for(unsigned int value : result) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
}