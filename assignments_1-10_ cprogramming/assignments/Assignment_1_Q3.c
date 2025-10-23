#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main() {
    // Q3: last digit without % operator
    long n; printf("Enter integer: "); if(scanf("%ld", &n)!=1) return 0;
    long last = n - (n/10)*10; // using division and multiplication
    if(last<0) last = -last;
    printf("Last digit = %ld\n", last);
    return 0;
}
