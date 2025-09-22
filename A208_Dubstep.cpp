#include <iostream>

void printPosition(std::size_t& position){
    std::cout << "Current position of 'WUB': " << position << std::endl;
}

std::string getNextWord(std::string& context, std::string word, std::size_t& position) {
    std::string res = "";
    unsigned int lengthOfWord = word.size();
    bool isNotFound = true;

    while(isNotFound) {
        if(context.substr(position, lengthOfWord) == word) {
            position+=lengthOfWord;
        } else {
            isNotFound = false;
        }
    }

    res = context.substr(position, context.find("WUB", position)-position);
    position += context.find("WUB", position)-position;
    return res;
}

int main() {
    std::string context = "", nextWord = "";
    std::size_t position = 0;

    std::cin >> context;

    while(position != std::string::npos) {
        nextWord = getNextWord(context, "WUB", position);
        if(nextWord != "") {
            std::cout << nextWord << " ";
        }
    }
}