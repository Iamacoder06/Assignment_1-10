#include <stdio.h>

/* Auto-generated: solution with only necessary headers included */


long power(long x, long y){ long res=1; for(long i=0;i<y;i++) res*=x; return res; }
int main(){ long x,y; if(scanf("%ld %ld", &x,&y)!=2) return 0; printf("%ld^%ld = %ld\n", x,y,power(x,y)); return 0; }
