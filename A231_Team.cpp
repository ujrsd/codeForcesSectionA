#include <iostream>

int main() {
    int numberOfProblems = 1;
    std::cin >> numberOfProblems;

    if(numberOfProblems >= 1 && numberOfProblems <= 1000) {
        int solvedProblems = 0;
        bool petyaKnows = 0;
        bool vasyaKnows = 0;
        bool tonyaKnows = 0;

        for(int i = 0; i < numberOfProblems; i++) {
            std::cin >> petyaKnows >> vasyaKnows >> tonyaKnows;
            if((petyaKnows && vasyaKnows) || (petyaKnows && tonyaKnows) || (vasyaKnows && tonyaKnows)) {
                solvedProblems++;
            }
        }
        std::cout << solvedProblems << std::endl;
    } else {
        std::cout << "Invalid number of problems" << std::endl;
    }
}