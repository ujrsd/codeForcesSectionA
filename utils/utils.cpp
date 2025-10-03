#include "utils.h"

// Bubble sort
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

// Merge Sort
void merge(std::vector<int>& leftVector, std::vector<int>& rightVector, std::vector<int>& mainVector) {
    int leftSize = mainVector.size()/2;
    int rightSize = mainVector.size() - leftSize;
    int l = 0, i = 0, r = 0;

    while(l < leftSize && r < rightSize) {
        if(leftVector[l] < rightVector[r]) {
            mainVector[i] = leftVector[l];
            l++;
        } else {
            mainVector[i] = rightVector[r];
            r++;
        }
        i++;
    }

    while(l < leftSize) {
        mainVector[i] = leftVector[l];
        l++;
        i++;
    }

    while(r < rightSize) {
        mainVector[i] = rightVector[r];
        r++;
        i++;
    }
}

void mergeSort(std::vector<int>& mainVector) {
    if(mainVector.size() > 1) {
        int middle = mainVector.size()/2;
        std::vector<int> leftVector(mainVector.begin(), mainVector.begin()+middle);
        std::vector<int> rightVector(mainVector.begin()+middle, mainVector.end());

        mergeSort(leftVector);
        mergeSort(rightVector);
        merge(leftVector, rightVector, mainVector);
    }
}

// Iterative merge sort
void iterativeMerge(std::vector<int>& vector, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<int> vector1(n1), vector2(n2);

    for(int i = 0; i < n1; i++) vector1[i] = vector[left + i];
    for(int j = 0; j < n2; j++) vector2[j] = vector[mid + 1 + j];

    int i = 0;    
    int j = 0;    
    int k = left; 
    
    while (i < n1 && j < n2) {
        if (vector1[i] <= vector2[j]) {
            vector[k] = vector1[i];
            i++;
        } else {
            vector[k] = vector2[j];
            j++;
        }
        k++;
    }
    
    while (i < n1) {
        vector[k] = vector1[i];
        i++;
        k++;
    }
    
    while (j < n2) {
        vector[k] = vector2[j];
        j++;
        k++;
    }
}

void iterativeMergeSort(std::vector<int>& vector) {
    int n = vector.size();

    for (int currSize = 1; currSize <= n-1; 
    currSize = 2*currSize) {
        for (int leftStart = 0; leftStart < n-1; 
        leftStart += 2*currSize) {
            int mid = std::min(leftStart + currSize - 1, n-1);
            int rightEnd = std::min(leftStart + 2*currSize - 1, n-1);
            iterativeMerge(vector, leftStart, mid, rightEnd);
        }
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

// Add up all values of a vector
template <typename T>
T sumUpVector(const std::vector<T>& values) {
    T sum = 0;
    for(const T& value : values) {
        sum += value;
    }
    return sum;
}