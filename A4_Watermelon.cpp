#include <iostream>

int main() {
    int weight = 1;
    std::string res = "NO";
    std::cin >> weight;

    if(weight > 3 && weight <= 100) {
        if(weight%2 == 0) {
            res = "YES";
            std::cout<< res <<std::endl;
        } else {
            std::cout << res << std::endl;
        }
    } else {
        std::cout << res << std::endl;
    }
}