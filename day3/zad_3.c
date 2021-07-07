#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void bSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                //swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

void printArray(int arr[], int len) {
    for (int i=0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {2, 5, 3, 7, 9, 1, 6};
    int len = 7;
    printf("Before sorting: \n");
    printArray(arr, len);
    bSort(arr, len);
    printf("After sorting: \n");
    printArray(arr, len);
    return EXIT_SUCCESS;
}
