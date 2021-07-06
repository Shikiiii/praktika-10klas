#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("a = %d\nb = %d\n", a, b);
    swap(&a, &b);
    printf("After swapping:\n");
    printf("a = %d\nb = %d", a, b);
    return 0;
}
