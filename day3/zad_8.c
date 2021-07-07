#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float sum(float a[6], int len, float s) {
    if(len < 0) {
        return s;
    }
    len = len - 1;
    s = s + a[len];
    return sum(a, len, s);
}

int main() {
    float arr[6] = {5.35, 3, 2, 6, 7, 0};
    int len = 6;
    float s = 0;
    printf("Sum: %f", sum(arr, len, s));
    return EXIT_SUCCESS;
}
