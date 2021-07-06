#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char arr[] = {'5', '3', '2', '6'};
    int len = 4;
    int value = 0;
    for(int i = 0; i < len; i++) {
        int r = arr[i] - '0';
        value = value*10 + r;
    }
    printf("Converted! Results: %d", value);
    return EXIT_SUCCESS;
}
