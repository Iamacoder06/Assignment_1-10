#include <stdio.h>

/* Auto-generated: solution with only necessary headers included */


long factorial(long n){ if(n<=1) return 1; return n*factorial(n-1); }
int main(){
    int n; if(scanf("%d", &n)!=1) return 0;
    if(n<0){ printf("Undefined for negative\n"); return 0; }
    printf("Factorial = %ld\n", factorial(n));
    return 0;
}
