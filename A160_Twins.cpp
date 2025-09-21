#include <iostream>
#include <vector>

void printVector(std::vector<unsigned int> values) {
    std::cout << "Values of coins: ";
    for(int i = 0; i < values.size(); i++) {
        std::cout << values[i] << " ";
    }
    std::cout << std::endl;
}

// Bubble sort
// Pass by reference to avoid copying the vector
void sortVector(std::vector<unsigned int>& values) {
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

// Get sum of all Coins
unsigned int getSumOfCoins(std::vector<unsigned int>& values) {
    unsigned int res = 0;
    for(int i = 0; i < values.size(); i++) {
        res+= values[i];
    }
    return res;
}

int main() {
    unsigned int amountCoins;
    std::vector<unsigned int> values;

    std::cin >> amountCoins;
    values.resize(amountCoins);
    for(int i = 0; i < values.size(); i++) {
        std::cin >> values[i];
    }

    sortVector(values);
    unsigned int sum = getSumOfCoins(values), neededSum = 0;

    //std::cout << "sum= " << sum << "  sum/2= " << sum/2 << std::endl;
    //std::cout << "neededSum= " << neededSum << std::endl;

    unsigned int i = values.size()-1, counter = 0;
    while(neededSum <= sum/2) {
        neededSum += values[i];
        i--;
        counter++;
        //std::cout << "neededSum= " << neededSum << std::endl;
    }

    std::cout << counter << std::endl;
}