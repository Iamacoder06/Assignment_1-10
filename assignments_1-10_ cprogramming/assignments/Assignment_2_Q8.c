#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q8: summation of digits
    long n; printf("Enter integer: "); if(scanf("%ld", &n)!=1) return 0;
    long m = llabs(n); long sum=0;
    while(m){ sum += m%10; m/=10; }
    printf("Sum of digits = %ld\n", sum);
    return 0;
}
