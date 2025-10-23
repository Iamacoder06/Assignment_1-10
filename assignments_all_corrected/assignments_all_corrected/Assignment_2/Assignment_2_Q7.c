#include <stdio.h>
#include <stdlib.h>

/* Auto-generated: solution with only necessary headers included */


int main(){
    long n; if(scanf("%ld", &n)!=1) return 0;
    long sign = n<0?-1:1; long m = llabs(n);
    long rev = 0;
    while(m){ rev = rev*10 + m%10; m/=10; }
    printf("Reversed = %ld\n", rev*sign);
    return 0;
}
