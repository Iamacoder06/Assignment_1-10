#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main() {
    // Q10: swap two numbers using and without using third variable
    int x,y; printf("Enter two integers x y: "); if(scanf("%d %d", &x,&y)!=2) return 0;
    // using third variable
    int t = x; x = y; y = t;
    printf("After swap using third variable: x=%d y=%d\n", x,y);
    // swap back without third variable (using arithmetic)
    x = x + y; y = x - y; x = x - y;
    printf("After swap without third variable: x=%d y=%d\n", x,y);
    return 0;
}
