#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void print(char o[], int len) {
    for(int j = 0; j < len; j++) {
        printf("%c", o[j]);
    }
    printf("\n");
}

int main(){
    char a[26] = "Hello! Have a nice day! :)";
    char b[26];
    for(int i = 0; i < 26; i++) {
        b[i] = a[i];
    }
    print(a, 26);
    print(b, 26);
    return EXIT_SUCCESS;
}
