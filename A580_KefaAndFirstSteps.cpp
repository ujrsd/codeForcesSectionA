#include <iostream>
#include <vector>

int main() {
    unsigned int amountOfDays = 1;
    std::vector<unsigned int> values;

    std::cin >> amountOfDays;
    values.resize(amountOfDays);

    for(int i = 0; i < values.size(); i++) {
        std::cin >> values[i];
    }

    unsigned int counter = 0, bestSegment = 0, lastValue = 1; // Initializing with '1' because values from vector are in between 1 and 10^9 included

    for(int i = 0; i < values.size(); i++) {
        if(lastValue <= values[i]) {
            counter++;
        } else {
            if(bestSegment < counter)
                bestSegment = counter;
            counter = 1;
        }
        lastValue = values[i];
    }

    if(bestSegment < counter)
        bestSegment = counter;

    std::cout << bestSegment << std::endl;
}