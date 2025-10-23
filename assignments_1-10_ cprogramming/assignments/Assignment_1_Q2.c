#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main() {
    // Q2: find last digit and delete last digit
    long n; printf("Enter integer: "); if(scanf("%ld", &n)!=1) return 0;
    int last = abs(n) % 10;
    long deleted = n / 10; // integer division truncates
    printf("Last digit = %d\nAfter deleting last digit = %ld\n", last, deleted);
    return 0;
}
