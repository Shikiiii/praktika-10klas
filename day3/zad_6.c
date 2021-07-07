#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int pwr(int a, int b, int c) {
    if(b == 0) {
        return 0;
    }
    if(c == 1) {
        return a;
    }
    return pwr(a*a, b, c-1);
}

int main() {
    int a, b, counter;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    counter = b;
    printf("Result: %d", pwr(a, b, counter));
    return EXIT_SUCCESS;
}
