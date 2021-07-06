#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int getMin(int* arr, int n) {
    int min = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int a[6] = {3, 2, 6, -1, 0, 7};
    int min = getMin(a, 6);
    printf("Min: %d", min);
}
