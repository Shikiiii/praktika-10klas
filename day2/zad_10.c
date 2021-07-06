#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int check(char arr[]) {
    for(int i = 0; i < 4; i++) {
        char c = arr[i];
        int symbol = c;
        if(i == 3) {
            return 1;
        }
        if(symbol == 43 || symbol == 45 && i == 0) {
            continue;
        }
        else if(symbol >= 48 && symbol <= 57) {
            continue;
        }
        else {
            return 0;
        }
    }
}


int main() {
    char symbols1[] = {'-', '5', '3'}, symbols2[] = {'5', '3', '5'}, symbols3[] = {'s', '3', 'l'};
    printf("0 : FALSE\n1 : TRUE\n=====\n");
    printf("%c%c%c is %d\n", symbols1[0], symbols1[1], symbols1[2], check(symbols1));
    printf("%c%c%c is %d\n", symbols2[0], symbols2[1], symbols2[2], check(symbols2));
    printf("%c%c%c is %d\n", symbols3[0], symbols3[1], symbols3[2], check(symbols3));
    return 0;
}
