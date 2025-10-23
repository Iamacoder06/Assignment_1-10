#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q3: check if angle A is 90 degrees using cosine rule: cos(A) = (b^2 + c^2 - a^2)/(2bc)
    double a,b,c; printf("Enter sides a b c (a is opposite angle A): "); if(scanf("%lf %lf %lf", &a,&b,&c)!=3) return 0;
    // We'll check using Pythagoras with tolerance
    double lhs = a*a; double rhs = b*b + c*c;
    if(fabs(lhs - rhs) < 1e-6) printf("Angle A is 90 degrees\n"); else printf("Angle A is not 90 degrees\n");
    return 0;
}
