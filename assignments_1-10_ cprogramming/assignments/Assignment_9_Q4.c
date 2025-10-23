#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

long gcd(long a,long b){ if(b==0) return a; return gcd(b, a%b); }
long lcm(long a,long b){ return (a/gcd(a,b))*b; }
int main(){ long a,b; printf("Enter two numbers: "); if(scanf("%ld %ld", &a,&b)!=2) return 0; printf("GCD = %ld\nLCM = %ld\n", gcd(llabs(a), llabs(b)), lcm(llabs(a), llabs(b))); return 0; }
