#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char symbol1 = '4', symbol2 = 'a', symbol3 = 'U';
    int ascii1 = symbol1, ascii2 = symbol2, ascii3 = symbol3;
    if(ascii1 >= 65 && ascii1 <= 90) {
        printf("%c is a higher-case letter from the alphabet.\n", symbol1);
    } else {
        printf("%c is not a higher-case letter from the alphabet.\n", symbol1);
    }
    if(ascii2 >= 65 && ascii2 <= 90) {
        printf("%c is a higher-case letter from the alphabet.\n", symbol2);
    } else {
        printf("%c is not a higher-case letter from the alphabet.\n", symbol2);
    }
    if(ascii3 >= 65 && ascii3 <= 90) {
        printf("%c is a higher-case letter from the alphabet.\n", symbol3);
    } else {
        printf("%c is not a higher-case letter from the alphabet.\n", symbol3);
    }
    return 0;
}
