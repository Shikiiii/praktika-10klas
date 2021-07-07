#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int checkPrime(int n, int c) {
    if(c > 9) {
        return 1;
    }
    if(n % c == 0) {
        return 0;
    }
    return checkPrime(n, c+1);
}

int main() {
    int n;
    printf("Enter number to be checked: \n");
    scanf("%d", &n);
    if(n == 1) {
        printf("1 is not a prime number. :D");
        return EXIT_SUCCESS;
    }
    int counter = 2;
    int isPrime = checkPrime(n, counter);
    if(isPrime == 1) {
        printf("%d is a prime number.", n);
    } else {
        printf("%d is not a prime number.", n);
    }
    return EXIT_SUCCESS;
}
