#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, x;
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    if(a == 0 && b == 0) {
        printf("x = 0\n");
    } else if (a != 0) {
        x = -b / a;
        printf("x = %.2f\n", x);
    } else {
        printf("No solution. :(");
    }
    return 0;
}
