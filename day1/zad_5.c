#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    if(num % 2 == 1) {
        printf("Can't divide odd numbers by 2.");
        return -1;
    }
    while(num > 1) {
        if(num / 2 == (num-1) / 2) {
            printf("The operation can't be done. %d is not dividable by 2.", num);
            return -1;
        }
        num = num / 2;
    }
    printf("The operation can be done.");
    return 0;
}
