#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q9: palindrome number check
    long n; printf("Enter integer: "); if(scanf("%ld", &n)!=1) return 0;
    long sign = n<0?-1:1; long m = llabs(n), rev=0, t=m;
    while(m){ rev = rev*10 + m%10; m/=10; }
    if(rev==t) printf("Palindrome\n"); else printf("Not palindrome\n");
    return 0;
}
