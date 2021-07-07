#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fact(int n) {
    if(n == 0) {
        return 1;
    }
    return fact(n-1) * n;
}

int main() {
    printf("%d\n", fact(5));
    return EXIT_SUCCESS;
}
