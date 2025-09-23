#include <iostream>

int main() {
    // Inputs
    std::string text = ""; // 1 <= n <= 100, uppercase and lowercase Latin letters
    std::cin >> text;

    // Logic
    //std::cout << "Step 0: " << text << std::endl;

    // Step 1: Convert everything in lowercase letters
    for(char &c : text) {
        c = std::tolower(c);
    }
    //std::cout << "Step 1: " << text << std::endl;

    // Step 2: Remove all vowels (attention: in the task "y" is also considered to be a vowel)
    int i = 0;
    while(i < text.size()) {
        char c = text[i];
        if(c == 'i' || c == 'o' || c == 'e' || c == 'u' || c == 'a' || c == 'y')
            text.erase(i,1);
        else
            i++;
    }
    //std::cout << "Step 2: " << text << std::endl;

    // Step 3: Place a '.' (Dot) before every consonant
    i = 0;
    while(i < text.size()) {
        text.insert(i,".");
        i += 2;
    }
    //std::cout << "Step 3: " << text << std::endl;

    // Outputs
    std::cout << text << std::endl;
}