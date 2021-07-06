#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int getMax(int* arr, int n) {
    int max = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int a[6] = {3, 2, 6, -1, 0, 7};
    int max = getMax(a, 6);
    printf("Max: %d", max);
}
