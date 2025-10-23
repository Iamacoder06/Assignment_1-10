#include <stdio.h>

/* Auto-generated: solution with only necessary headers included */

void fib_range(int n){ long a=0,b=1; for(int i=0;i<n;i++){ printf("%ld ", a); long nxt=a+b; a=b; b=nxt; } printf("\n"); }
int main(){ int n; if(scanf("%d", &n)!=1) return 0; fib_range(n); return 0; }
