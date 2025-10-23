#include <stdio.h>
#include <stdlib.h>

/* Auto-generated: solution with only necessary headers included */


int main() {
    long n; if(scanf("%ld", &n)!=1) return 0;
    long sign = n<0?-1:1; long m = llabs(n);
    int d1 = m%10; int d2 = (m/10)%10;
    long rest = m/100;
    long res = rest*100 + d1*10 + d2;
    printf("After exchanging last two digits = %ld\n", res*sign);
    return 0;
}
