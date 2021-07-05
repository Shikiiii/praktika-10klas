#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, num, sum = 0, max = INT_MIN, min = INT_MAX;
    double avg;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &num);
        sum += num;
        max = num > max ? num : max;
        min = num < min ? num : min;
    }
    avg = (double)sum/n;
    printf("Sum: %d\nMax: %d\nMin: %d\nAvg: %.2f\n", sum, max, min, avg);
    return 0;
}
