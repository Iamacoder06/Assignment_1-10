#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q4: even or odd
    long n; printf("Enter integer: "); if(scanf("%ld", &n)!=1) return 0;
    if(n%2==0) printf("Even\n"); else printf("Odd\n");
    return 0;
}
