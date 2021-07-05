#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char operation;
    printf("Enter operation: (+ , -, *, /, ^)");
    scanf("%c", &operation);
    float n1, n2;
    printf("Enter number 1: ");
    scanf("%f", &n1);
    printf("Enter number 2: ");
    scanf("%f", &n2);
    if(operation == '+') {
        printf("%.2f + %.2f = %.2f", n1, n2, (n1+n2));
    }
    else if(operation == '-') {
        printf("%.2f - %.2f = %.2f", n1, n2, (n1-n2));
    }
    else if(operation == '*') {
        printf("%.2f * %.2f = %.2f", n1, n2, (n1*n2));
    }
    else if(operation == '/') {
        if(n2 == 0) {
            printf("Can't divide by 0.");
            return -1;
        }
        printf("%.2f / %.2f = %.2f", n1, n2, (n1/n2));
    }
    else if(operation == '^') { // to the power of
        printf("%.2f^%.2f = %.2f", n1, n2, (powf(n1, n2)));
    }
    else {
        printf("Operation is not recognized.");
        return -1;
    }
    return 0;
}
