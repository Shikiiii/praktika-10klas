#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int getCGD(int a, int b) {
    if(b == 0) {
        return a;
    }
    return getCGD(b, a/b);
}


int main() {
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("GCD: %d", getCGD(a, b));
    return EXIT_SUCCESS;

}
