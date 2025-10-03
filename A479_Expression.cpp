#include <iostream>

int main() {
    // Inputs
    unsigned int a = 1, b = 1, c = 1; // 1 <= a,b,c <= 10

    std::cin >> a >> b >> c;

    // Logic
    unsigned int res0, res1, res2, res3, result;
    res0 = a+b+c;
    res1 = a*(b+c);
    res2 = (a+b)*c;
    res3 = a*b*c;

    result = res0 > res1 ? res0 : res1;
    result = res2 > result ? res2 : result;
    result = res3 > result ? res3 : result;

    // Output
    std::cout << result << std::endl;
}