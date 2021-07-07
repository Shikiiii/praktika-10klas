#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sum(int a[6], int len, int s) {
    if(len < 0) {
        return s;
    }
    len = len - 1;
    s = s + a[len];
    return sum(a, len, s);
}

int main() {
    int arr[6] = {5, 3, 2, 6, 7, 0};
    int len = 6;
    int s = 0;
    printf("Sum: %d", sum(arr, len, s));
    return EXIT_SUCCESS;
}
