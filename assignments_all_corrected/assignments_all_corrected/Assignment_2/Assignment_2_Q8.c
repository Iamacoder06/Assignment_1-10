#include <stdio.h>
#include <stdlib.h>

/* Auto-generated: solution with only necessary headers included */


int main(){
    long n; if(scanf("%ld", &n)!=1) return 0;
    long m = llabs(n); long sum=0;
    while(m){ sum += m%10; m/=10; }
    printf("Sum of digits = %ld\n", sum);
    return 0;
}
