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

int check(char c[], int len) {
    int found1 = 0, found2 = 0, found3 = 0;
    for(int i = 0; i < len; i++) {
        if(found3 == 1) {
            if(c[i] == 'o' || c[i] == 'O') {
                return 1;
            }
            else {
                found1 = 0;
                found2 = 0;
                found3 = 0;
                continue;
            }
        }
        else if(found2 == 1) {
            if(c[i] == 'n' || c[i] == 'N') {
                found3 = 1;
                found2 = 0;
            } else {
                found1 = 0;
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
    return 0;
}

int main() {
    char a[11] = "Hellonano !";
    char b[8] = "Hellona!";
    char c[10] = "HelloNaNo!";
    printf("0: Doesn't contain the word\n1: Does contain the word\n=========\n");
    print(a, 11);
    printf("Text 1: %d\n\n", check(a, 11));
    print(b, 8);
    printf("Text 2: %d\n\n", check(b, 8));
    print(c, 10);
    printf("Text 3: %d\n\n", check(c, 10));
    return EXIT_SUCCESS;
}
