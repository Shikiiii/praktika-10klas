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

int main(){
    char a[14] = "Heo!ava ceay:)";
    char b[12] = "ll He ni d! ";
    char c[26];
    int i = 0, j = 0, break1 = 0, break2 = 0;
    while(1) {
        if(a[i] == 0) {
            break1 = 1;
        }
        if(b[i] == 0) {
            break2 = 1;
        }
        if(break1 == 1 && break2 == 1) {
            break;
        }
        else if(break1 == 1) {
            c[j] = b[i];
            c[j+1] = b[i+1];
            i += 2;
            j += 2;
        }
        else if(break2 == 1) {
            c[j] = a[i];
            c[j+1] = a[i+1];
            i += 2;
            j += 2;
        } else {
            c[j] = a[i];
            c[j+1] = a[i+1];
            c[j+2] = b[i];
            c[j+3] = b[i+1];
            i += 2;
            j += 4;
        }
    }
    print(c, 26);
    return EXIT_SUCCESS;
}
