#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

long factorial(long n){ if(n<=1) return 1; return n*factorial(n-1); }
int main(){
    // Q12: factorial
    int n; printf("Enter integer (>=0): "); if(scanf("%d", &n)!=1) return 0;
    if(n<0){ printf("Undefined for negative\n"); return 0; }
    printf("Factorial = %ld\n", factorial(n));
    return 0;
}
