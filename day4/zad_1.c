#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void setBit(int* mask, int n) {
    *mask |= (1 << n);
}

void eraseBit(int* mask, int n) {
    *mask &= ~(1 << n);
}

int isSet(int mask, int n) {
    return mask & (1 << n);
}

int onesCount(int mask) {
    int count = 0;
    for (int i = 0; i < sizeof(int) * 8; i++) {
        if (isSet(mask, i)) {
            count++;
        }
    }
    return count;
}

int zerosCount(int mask) {
    return sizeof(int) * 8 - onesCount(mask);
}

void clearConsole() {
    for(int j = 0; j < 30; j++) {
        printf("\n");
    }
}

int main(){
    int information = 0;
    int option;
    while (1) {
        printf("Hello! Welcome! :)\nTo continue, please choose one of the options below:\n============\n 1 - Enter presence of student.\n 2 - Enter absence of student.\n 3 - Get the current information of all students.\n 4 - Exit the program.\n");
        scanf("%d", &option);
        if (option == 1) {
            int n;
            printf("Okay! Please enter the number of the student you want to mark as present.\n");
            scanf("%d", &n);
            if(n < 1 || n > 32) {
                printf("Invalid class number! Please enter a number between 1 and 32.\n(Please wait, the program will auto-reset.)\n");
                sleep(5);
                clearConsole();
            } else {
                setBit(&information, n-1);
                printf("Done! %d is marked as present.\n(Please wait, the program will auto-reset.)\n", n);
                sleep(5);
                clearConsole();
            }
        }
        else if (option == 2) {
            int n;
            printf("Okay! Please enter the number of the student you want to mark as absent.\n");
            scanf("%d", &n);
            if(n < 1 || n > 32) {
                printf("Invalid class number! Please enter a number between 1 and 32.\n(Please wait, the program will auto-reset.)\n");
                sleep(5);
                clearConsole();
            } else {
                eraseBit(&information, n-1);
                printf("Done! %d is marked as absent.\n(Please wait, the program will auto-reset.)\n", n);
                sleep(5);
                clearConsole();
            }
        }
        else if (option == 3) {
            printf("\n===========\nAbsent: %d\n", zerosCount(information));
            printf("Present: %d\n===========\n", onesCount(information));
            printf("Would you like to get detailed information about every student?\n(1 : YES , 2 : N0)\n");
            int n;
            scanf("%d", &n);
            if(n == 1) {
                printf("\nOkay!\n============\n");
                for(int j = 0; j < 32; j++) {
                    if(isSet(information, j) != 0) {
                        printf("%d is present.\n", j+1);
                    }
                    else {
                        printf("%d is absent.\n", j+1);
                    }
                }
                printf("\n(Please wait, the program will auto-reset.)\n");
                sleep(10);
                clearConsole();
            } else {
                printf("Okay!\n(Please wait, the program will auto-reset.)\n");
                sleep(3);
                clearConsole();
            }
        }
        else if (option == 4) {
            printf("Have a nice day! :)");
            break;
        }
        else {
            printf("Invalid option! Please make sure you entered a correct number.\n(Please wait, the program will auto-reset.)\n");
            sleep(5);
            clearConsole();
        }
    }
    return EXIT_SUCCESS;
}
