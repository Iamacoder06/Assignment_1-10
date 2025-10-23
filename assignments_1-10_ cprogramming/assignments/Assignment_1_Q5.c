#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main() {
    // Q5: double the last digit of number
    long n; printf("Enter integer: "); if(scanf("%ld", &n)!=1) return 0;
    int last = abs(n)%10;
    long result = n/10*10 + (last*2)%10; // keep only single digit in last place
    // Note: ambiguous; here we replace last digit by (2*last)%10
    printf("After doubling last digit (mod 10) = %ld\n", result);
    return 0;
}
