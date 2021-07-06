#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char arr[] = {'5', '3', '.', '2', '6', '3'};
    int len = 6;
    float value = 0;
    int foundDot = 0;
    int zeros_counter = 1;
    for(int i = 0; i < len; i++) {
        int temp = arr[i];
        if (temp == 46) {
            foundDot = 1;
            continue;
        }
        if(foundDot == 1) {
            int r = arr[i] - '0';
            float temp2 = 0;
            float temp3 = 0;
            for(int j = 0; j < zeros_counter; j++) {
                if(j == 0) {
                    temp2 = r*0.1;
                    temp3 = temp2;
                } else {
                    temp2 = temp3*0.1;
                    temp3 = temp2;
                }
            }
            value = value + temp2;
            zeros_counter++;
        } else {
            int r = arr[i] - '0';
            value = value*10 + r;
        }
    }
    printf("Converted! Results: %f", value);
    return EXIT_SUCCESS;
}
