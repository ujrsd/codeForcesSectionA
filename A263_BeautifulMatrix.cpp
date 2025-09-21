#include <iostream>
#include <stdlib.h>

int main() {
    unsigned int matrix[5][5];
    int posX, posY;

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            std::cin >> matrix[i][j];
            if(matrix[i][j] == 1) {
                posX = i;
                posY = j;
                //std::cout << "i= " << i << "   j= " << j << std::endl;
            }
        }
    }

    //std::cout << "posX= " << posX << " posY= " << posY << std::endl;

    posX = abs(posX-2);
    posY = abs(posY-2);
    
    //std::cout << "abs.posX= " << posX << " abs.posY= " << posY << std::endl;
    std::cout << posX+posY << std::endl; 
}