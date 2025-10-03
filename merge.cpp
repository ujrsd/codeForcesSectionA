#include<iostream>
#include<vector>

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

int main() {
    std::vector<int> vector = {4, 1, 3, 9, 7};
    std::vector<int> vector2 = {10, 20, 30, 40, 50};
    std::cout << "Unsorted vector: ";
    for (auto val: vector) 
        std::cout << val << " ";
    std::cout << std::endl;
    
    iterativeMergeSort(vector);

    std::cout << "Sorted vector:   ";
    for (auto val: vector) 
        std::cout << val << " ";
    std::cout << std::endl;
}