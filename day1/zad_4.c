#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c;
    printf("Enter side a: ");
    scanf("%f", &a);
    printf("Enter side b: ");
    scanf("%f", &b);
    printf("Enter side c: ");
    scanf("%f", &c);
    // Check if its a valid triangle, from Wikipedia:
    // - The 2 shortest sides (of a triangle) combined must be longer than the longest side.
    // If not, the two short sides cannot reach the end points of the longest line.
    if(a <= 0 || b <= 0 || c <= 0) {
        printf("Not a valid triangle, sides can't be negative.");
        return 0;
    }
    float small1 = a, small2 = a, big = a;
    for(int i = 0; i < 2; i++) {
        if(i == 0) {
            if(b < small1) {
                small1 = b;
            }
            if(b > big) {
                big = b;
            }
        }
        else if(i == 1) {
            if(c < small1) {
                small1 = c;
                small2 = b;
            }
            else if(c < small2) {
                if(c < small1) {
                    small1 = c;
                    small2 = b;
                }
                else {
                    small2 = c;
                }
            }
            else if(c > big) {
                big = c;
            }
        }
    }
    if(small1 + small2 < big) {
        printf("Not a valid triangle, the 2 smallest sides combined are less than the big one.");
        return 0;
    }
    // Finding out the P and S of the triangle.
    printf("P = %.2f\n", (a+b+c));
    float p = (a+b+c)/2;
    printf("S = %.2f\n", (sqrt(p*(p-a)*(p-b)*(p-c))));
    // Checking what type the triangle is.
    if(a == b == c) {
        printf("The triangle is equilateral.\n");
    }
    else if(a == b || b == c || c == a) {
        printf("The triangle is isosceles.\n");
    }
    else {
        printf("The triangle is scalene.\n");
    }
    // Checking the type of the angles of the triangle.
    if(pow(a, 2)+pow(b, 2)<pow(c, 2)) {
        printf("The triangle is obtuse.\n");
    }
    else if(pow(a, 2)+pow(b, 2)==pow(c, 2)) {
        printf("The triangle is right.\n");
    }
    else {
        printf("The triangle is acute.\n");
    }
}
