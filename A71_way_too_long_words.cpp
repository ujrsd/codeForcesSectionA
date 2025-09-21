#include <iostream>
#include <string>
#include <list>

int main() {
    //std::cout << "== CodeForces - Task A71 - Solution by LC-ujr ==" << std::endl << std::endl;

    int nLines = 1;
    //std::cout << "Insert amount of Words to check (between 1 and 100): ";
    std::cin >> nLines;

    if(nLines >= 1 && nLines <= 100) {
        std::string inputWord;

        for(int i=0; i < nLines; i++) {
            //std::cout << "Insert Word Nr. " << i+1 << ": ";
            std::cin >> inputWord;

            if(inputWord.size() > 10) {
                std::string shortWord = inputWord[0] + std::to_string(inputWord.size()-2) + inputWord[inputWord.size()-1];
                std::cout << shortWord << std::endl;
            } else {
                std::cout << inputWord << std::endl;
            }
        }
    } else {
        std::cout << "Invalid amount of Lines." << std::endl;
    }
}