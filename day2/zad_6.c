#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char symbol1 = '4', symbol2 = 'a', symbol3 = 'u';
    int ascii1 = symbol1, ascii2 = symbol2, ascii3 = symbol3;
    if(ascii1 >= 97 && ascii1 <= 122) {
        printf("%c is a lower-case letter from the alphabet.\n", symbol1);
    } else {
        printf("%c is not a lower-case letter from the alphabet.\n", symbol1);
    }
    if(ascii2 >= 97 && ascii2 <= 122) {
        printf("%c is a lower-case letter from the alphabet.\n", symbol2);
    } else {
        printf("%c is not a lower-case letter from the alphabet.\n", symbol2);
    }
    if(ascii3 >= 97 && ascii3 <= 122) {
        printf("%c is a lower-case letter from the alphabet.\n", symbol3);
    } else {
        printf("%c is not a lower-case letter from the alphabet.\n", symbol3);
    }
    return 0;
}
