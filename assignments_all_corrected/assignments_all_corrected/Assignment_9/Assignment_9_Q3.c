#include <stdio.h>

/* Auto-generated: solution with only necessary headers included */


long fact_rec(long n){ if(n<=1) return 1; return n*fact_rec(n-1); }
int main(){ int n; if(scanf("%d", &n)!=1) return 0; printf("Factorial (recursion) = %ld\n", fact_rec(n)); return 0; }
