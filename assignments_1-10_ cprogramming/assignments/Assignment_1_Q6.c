#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main() {
    // Q6: exchange the last two digits
    long n; printf("Enter integer: "); if(scanf("%ld", &n)!=1) return 0;
    long sign = n<0?-1:1; long m = llabs(n);
    int d1 = m%10; int d2 = (m/10)%10;
    long rest = m/100;
    long res = rest*100 + d1*10 + d2;
    printf("After exchanging last two digits = %ld\n", res*sign);
    return 0;
}
