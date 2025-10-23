#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

long fact_rec(long n){ if(n<=1) return 1; return n*fact_rec(n-1); }
int main(){ int n; printf("Enter n: "); if(scanf("%d", &n)!=1) return 0; printf("Factorial (recursion) = %ld\n", fact_rec(n)); return 0; }
