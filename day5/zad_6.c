#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <string.h>

void print(char o[], int len) {
    for(int j = 0; j < len; j++) {
        printf("%c", o[j]);
    }
    printf("\n");
}

int count(char c[], int len) {
    int found1 = 0, found2 = 0, found3 = 0, counter = 0;
    for(int i = 0; i < len; i++) {
        if(found3 == 1) {
            if(c[i] == 'o' || c[i] == 'O') {
                counter += 1;
                found3 = 0;
                continue;
            }
            else {
                found3 = 0;
                continue;
            }
        }
        else if(found2 == 1) {
            if(c[i] == 'n' || c[i] == 'N') {
                found3 = 1;
                found2 = 0;
            } else {
                found2 = 0;
                continue;
            }
        }
        else if(found1 == 1) {
            if(c[i] == 'a' || c[i] == 'A') {
                found2 = 1;
                found1 = 0;
            } else {
                found1 = 0;
                continue;
            }
        }
        else {
            if(c[i] == 'n' || c[i] == 'N') {
                found1 = 1;
            }
        }
    }
    return counter;
}

int main() {
    char a[46] = "HellonanonanoNANO n ANO !";
    char b[8] = "Hellona!";
    char c[18] = "HelloNaNonanoNoNo!";
    print(a, 46);
    printf("Count for text 1: %d\n\n", count(a, 46));
    print(b, 8);
    printf("Count for text 2: %d\n\n", count(b, 8));
    print(c, 18);
    printf("Count for text 3: %d\n\n", count(c, 18));
    return EXIT_SUCCESS;
}
