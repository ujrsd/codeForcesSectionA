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

// Print all values of a vector
template <typename T>
T sumUpVector(const std::vector<T>& values) {
    T sum = 0;
    for(const T& value : values) {
        sum += value;
    }
    return sum;
}

int main() {
    // Inputs
    unsigned int valuesPerVector = 1; // 1 <= n <= 100
    std::vector<int> x, y, z; // -100 <= x_i, y_i, z_i <= 100

    std::cin >> valuesPerVector;
    x.resize(valuesPerVector);
    y.resize(valuesPerVector);
    z.resize(valuesPerVector);

    for(int i = 0; i < valuesPerVector; i++) {
        std::cin >> x[i];
        std::cin >> y[i];
        std::cin >> z[i];
    }

    //printVector(x);
    //printVector(y);
    //printVector(z);

    // Logic
    std::string result = "YES";
    result = sumUpVector(x) != 0 ? "NO" : "YES";

    if(result == "YES")
        result = sumUpVector(y) != 0 ? "NO" : "YES";

    if(result == "YES")
        result = sumUpVector(z) != 0 ? "NO" : "YES";
    //std::cout << "sum x: " << sumUpVector(x) << std::endl;
    //std::cout << "sum y: " << sumUpVector(y) << std::endl;
    //std::cout << "sum z: " << sumUpVector(z) << std::endl;

    // Outputs
    std::cout << result << std::endl;
}

// Error on the following test case:
/*
    == Test Nr. 7 ==
    Input : 13
        -3 -36 -46
        -11 -50 37
        42 -11 -15
        9 42 44
        -29 -12 24
        3 9 -40
        -35 13 50
        14 43 18
        -13 8 24
        -48 -15 10
        50 9 -50
        21 0 -50
        0 0 -6
    Output: NO
    Answer: YES
    Solution: Looks like the first column is the x value, the second the y value, the thrid the z value -> wrong initialisation.
      Now: Only for loop to get sum of vector and look if that one is 0.

    == Test Nr. 50 ==
    Input : 1
        1 -2 0
    Output: YES
    Answer: NO
    Solution: Problem: No break check when already one coordinate is wrong. Here: "NO" after x-check, but change to "YES" after y-check.
      One solution: result = sumUpVector(x) != 0 ? "NO" : result; -> But then the other two cases will always be calculated
      Better solution: if statments before the calculation of y and z to check if the result has already flipped to "NO".
*/