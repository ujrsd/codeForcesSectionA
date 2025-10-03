/*
    Problem Name: Laptops
    Difficulty  : 1100
    Link        : https://codeforces.com/problemset/problem/456/A
*/
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Inputs
    unsigned int amountOfLaptops = 1;
    std::cin >> amountOfLaptops;

    std::vector<std::pair<unsigned int, unsigned int>> priceAndQualityPerLaptop(amountOfLaptops);
    for(int i = 0; i < amountOfLaptops; i++) {
        std::cin >> priceAndQualityPerLaptop[i].first >> priceAndQualityPerLaptop[i].second;
    }

    // Logic
    // Insert Code here - without return statement
    std::string result = "Poor Alex";
    
    std::sort(priceAndQualityPerLaptop.begin(),
              priceAndQualityPerLaptop.end(),
              [](const std::pair<unsigned int,unsigned int>& a, const std::pair<unsigned int,unsigned int>& b) {return a.first < b.first;}
             );

    unsigned int bestQuality = priceAndQualityPerLaptop[0].second;
    for(int i = 1; i < priceAndQualityPerLaptop.size(); i++) {
        if(priceAndQualityPerLaptop[i].second < bestQuality) {
            result = "Happy Alex";
            break;
        }
        bestQuality = priceAndQualityPerLaptop[i].second;
    }

    // Outputs
    std::cout << result << std::endl;
}