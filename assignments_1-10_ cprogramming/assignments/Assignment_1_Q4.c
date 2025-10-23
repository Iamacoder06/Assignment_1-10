#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main() {
    // Q4: delete last two digits
    long n; printf("Enter integer: "); if(scanf("%ld", &n)!=1) return 0;
    long res = n / 100;
    printf("After deleting last two digits = %ld\n", res);
    return 0;
}
