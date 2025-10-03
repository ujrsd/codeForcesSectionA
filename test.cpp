#include<iostream>
#include<vector>
#include<algorithm>

int main() {
    std::vector<std::pair<int, int>> vector = {
        {4,10}, {1,20}, {3,30}, {9,40}, {7,50}
    };

    std::cout << "Unsorted vector:" << std::endl;
    for (std::pair<int, int> val: vector) 
        std::cout << "Price: " << val.first << ", Quality: " << val.second << std::endl;
    std::cout << std::endl;

    std::sort(vector.begin(), vector.end(), [](const std::pair<int,int>& a, const std::pair<int,int>& b) {return a.first < b.first;});

    std::cout << "Sorted vector:"  << std::endl;
    for (std::pair<int, int> val: vector) 
        std::cout << "Price: " << val.first << ", Quality: " << val.second << std::endl;
    std::cout << std::endl;
}