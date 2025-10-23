#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main() {
    // Q9: summation of two variables
    double a,b; printf("Enter two numbers: "); if(scanf("%lf %lf", &a,&b)!=2) return 0;
    printf("Sum = %.6g\n", a+b);
    return 0;
}
