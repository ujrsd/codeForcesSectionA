#include <iostream>

int main() {
    std::string username = "";
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";

    std::cin >> username;

    if(username != "") {
        unsigned int counter = 0;
        //std::cout << "count = " << counter << std::endl;

        for(char c : alphabet) {
            std::size_t found = username.find(c);
            if(found != std::string::npos) {
                counter++;
                //std::cout << c << " found at position: " << found << " -> counter++ -> counter= " << counter << std::endl;
            } else {
                //std::cout << c << " not found in the username" << std::endl;
            }
        }

        if(counter%2 == 0) {
            std::cout << "CHAT WITH HER!" << std::endl;
        } else {
            std::cout << "IGNORE HIM!" << std::endl;
        }

    } else {
        std::cout << "ERROR: Username is blank!" << std::endl;
    }
}