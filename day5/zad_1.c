#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int length(char a[]) {
    int n = 1, c = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] != 0) {
            n += 1;
            c += 1;
        }
        else {
            return c;
        }
    }
}

int main() {
    printf("Length: %d", length("Hello! :)"));
    return EXIT_SUCCESS;
}
