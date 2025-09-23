#include <iostream>

// Check if char is present
bool checkForChar(std::string& text, char c, std::size_t& position) {
    position = text.find(c, position);
    if(position != std::string::npos) {
        position++;
        return true;
    } else {
        return false;
    }
}

int main() {
    // Inputs
    std::string text = ""; // 1 <= text <= 100
    std::cin >> text;

    // Logic
    // Go through the text and check for a 'h', 'e', 'l', 'l', 'o' in one go.
    std::string result = "YES", wordToCheck = "hello";
    std::size_t position = 0;

    for(int i = 0; i < wordToCheck.size(); i++) {
        char c = wordToCheck[i];
        //std::cout << "Check for char c=" << c << std::endl;
        if(!checkForChar(text, c, position)) {
            result = "NO";
            break;
        }
    }

    // Outputs
    std::cout << result << std::endl;
}