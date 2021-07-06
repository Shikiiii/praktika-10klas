#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sumArr(int* arr, int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += *(arr+i);
    }
    return sum;
}

int main() {
    int a[6] = {3, 2, 6, -1, 0, 3};
    int s = sumArr(a, 6);
    printf("Sum: %d", s);
    return 0;
}
