#include <iostream>

int main() {
    unsigned int amountBananas = 1, priceFirstBanana = 1;
    int money = 1;
    std::cin >> priceFirstBanana >> money >> amountBananas;

    if(priceFirstBanana >= 1 && amountBananas <= 1000 && (money >= 0 && money <= 10000000000)) {
        unsigned int sum = 0;
        for(int i = 1; i <= amountBananas; i++){
            sum += i*priceFirstBanana;
        }

        if(money > sum)
            std::cout << "0" << std::endl;
        else
            std::cout << sum-money << std::endl;
        
    } else {
        std::cout << "ERROR: Initialisation error!" << std::endl;
    }
}