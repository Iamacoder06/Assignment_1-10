#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q7: reverse digits of integer
    long n; printf("Enter integer: "); if(scanf("%ld", &n)!=1) return 0;
    long sign = n<0?-1:1; long m = llabs(n);
    long rev = 0;
    while(m){ rev = rev*10 + m%10; m/=10; }
    printf("Reversed = %ld\n", rev*sign);
    return 0;
}
