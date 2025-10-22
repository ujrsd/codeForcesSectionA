/*
    Problem Name: Sum of Odd Integers
    Difficulty  : 1100
    Link        : https://codeforces.com/problemset/problem/1327/A
*/
#include <iostream>
#include <vector>

int main() {
    // Inputs
    unsigned int testCases = 1;
    std::cin >> testCases;

    std::vector<std::pair<size_t, size_t>> cases(testCases);
    for(int i = 0; i < testCases; i++) std::cin >> cases[i].first >> cases[i].second;

    // Logic
    // Insert Code here - without return statement
    for(int i = 0; i < cases.size(); i++) {
        if(cases[i].second*cases[i].second <= cases[i].first && (cases[i].first+cases[i].second)%2 == 0) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    } 

    // Outputs
}