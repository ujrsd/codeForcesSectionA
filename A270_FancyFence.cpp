/*
    Problem Name: Fancy Fence
    Difficulty  : 1100
    Link        : https://codeforces.com/problemset/problem/270/A
*/
#include<iostream>
#include<vector>
#include<algorithm>

int main() {
    // Inputs
    unsigned int amountTests = 0;
    std::cin >> amountTests;

    std::vector<unsigned int> angles(amountTests);
    for(int i = 0; i < angles.size(); i++) std::cin >> angles[i];

    // Logic
    // Insert Code here - without return statement
    /*
        Regular Polygon: Conditions: n = amount of sides, alpha = angle
        ((n-2)*180°)/n must be a whole number -> so (n-2)*180%n == 0 so that will be true

        The input is a angle alpha, the result of the calculation above, this means:
            n = 360°/(180°-alpha)
        This means: if 360° % (180°-alpha) -> then for the given angle alpha, a regular polygon exists.
    */

    for(unsigned int angle : angles) {
        if(360%(180-angle) == 0) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }

    // Outputs - Done in the loop
}