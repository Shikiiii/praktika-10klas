#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int compr(char a, char b) {
    int dif;
    int cnv1 = a;
    int cnv2 = b;
    if(cnv1 == cnv2) {
        dif = 1;
    } else {
        dif = 0;
    }
    return dif;
}

int main() {
    int difs[26];
    char str1[26] = "Hello! Have a nice day! :)";
    char str2[26] = "Hwllw? HVVe ! nicE dAY; ;(";
    printf("COMPARING:\nHello! Have a nice day! :) (AND) Hwllw? HVVe ! nicE dAY; ;(\n============\n\n");
    for(int j = 0; j < 26; j++) {
        int dif = compr(str1[j], str2[j]);
        if(dif == 1) {
            difs[j] = 1;
        } else {
            difs[j] = 2;
        }
    }
    char difs_pointer[26];
    int difs_counter = 0;
    for(int i = 0; i < 26; i++) {
        if(difs[i] == 1) {
            difs_pointer[i] = ' ';
        }
        else {
            difs_pointer[i] = '^';
            difs_counter += 1;
        }
    }
    printf("Hello! Have a nice day! :)\n");
    printf("Hwllw? HVVe ! nicE dAY; ;(\n");
    for(int l = 0; l < 26; l++) {
        printf("%c", difs_pointer[l]);
    }
    printf("\n\nTotal differences: %d", difs_counter);
    return EXIT_SUCCESS;
}
