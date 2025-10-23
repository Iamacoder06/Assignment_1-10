#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q1: area of triangle given sides a,b,c (Heron's formula)
    double a,b,c; printf("Enter sides a b c: "); if(scanf("%lf %lf %lf", &a,&b,&c)!=3) return 0;
    double s = (a+b+c)/2.0; double area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area = %.6g\n", area);
    return 0;
}
