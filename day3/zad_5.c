#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int F(int n, int a, int b) {
    if(n == 1) {
        return a+b;
    }
    if(a == 0) {
        a = 1;
        n = n - 1;
        return F(n, a, b);
    }
    n = n - 1;
    int temp = a+b;
    b = a;
    a = temp;
    return F(n, a, b);
}

int main() {
    int n, prev1 = 0, prev2 = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("F(%d) = %d", n, F(n, prev1, prev2));
    return EXIT_SUCCESS;
}
