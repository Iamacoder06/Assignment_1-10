#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

#include <math.h>
long power(long x, long y){ long res=1; for(long i=0;i<y;i++) res*=x; return res; }
int main(){ long x,y; printf("Enter X Y: "); if(scanf("%ld %ld", &x,&y)!=2) return 0; printf("%ld^%ld = %ld\n", x,y,power(x,y)); return 0; }
