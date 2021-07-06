#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char symbol1 = '4', symbol2 = 'a', symbol3 = 'U';
    int ascii1 = symbol1, ascii2 = symbol2, ascii3 = symbol3;
    if(ascii1 >= 48 && ascii1 <= 57) {
        printf("%c is a digit.\n", symbol1);
    } else {
        printf("%c is not a digit.\n", symbol1);
    }
    if(ascii2 >= 48 && ascii2 <= 57) {
        printf("%c is a digit.\n", symbol2);
    } else {
        printf("%c is not a digit.\n", symbol2);
    }
    if(ascii3 >= 48 && ascii3 <= 57) {
        printf("%c is a digit.\n", symbol3);
    } else {
        printf("%c is not a digit.\n", symbol3);
    }
    return 0;
}
