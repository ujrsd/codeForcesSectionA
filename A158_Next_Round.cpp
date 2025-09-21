#include <iostream>
#include <vector>

int main() {
    unsigned int participants, place;
    std::cin >> participants >> place;

    if(participants >= place) {
        if(participants >= 1 && participants <= 50 && place >= 1 && participants <= 50) {
            // From the task text: score in decreasing order (a_i >= a_(i+1))
            std::vector<int> scores(participants);
            for(int i = 0; i < participants; i++) {
                std::cin >> scores[i];
            }

            // Second Error: Check the k-position, but a list starts at index 0. If only one participant exists, you cannot
            //               check the vector at position "1" because the vector has only an object at position 0.
            unsigned int scoreNeeded = scores[place-1], counter = 0;

            for(unsigned int score : scores) {
                // First Error: Score needs to be positive. A positive number is greater than 0.
                if(score >= scoreNeeded && score > 0) {
                    counter++;
                } else {
                    break;
                }
            }

            std::cout << counter << std::endl;
        } else {
            std::cout << "ERROR: Too many participants, only 50 are allowed!" << std::endl;
        }
    } else {
        std::cout << "ERROR: Less participants as the given place of respected score!" << std::endl;
    }
}