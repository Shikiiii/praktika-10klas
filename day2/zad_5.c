#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int getSum(int* arr, int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int a[6] = {3, 2, 6, -1, 0, 7};
    int sum = getSum(a, 6);
    printf("Sum: %d", sum);
}
