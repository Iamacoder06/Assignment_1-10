#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

void fib_range(int n){ long a=0,b=1; for(int i=0;i<n;i++){ printf("%ld ", a); long nxt=a+b; a=b; b=nxt; } printf("\n"); }
int main(){ int n; printf("Enter number of Fibonacci terms: "); if(scanf("%d", &n)!=1) return 0; fib_range(n); return 0; }
