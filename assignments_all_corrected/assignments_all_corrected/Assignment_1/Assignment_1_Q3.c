#include <stdio.h>

/* Auto-generated: solution with only necessary headers included */


int main() {
    // last digit without % operator
    long n;
    if(scanf("%ld", &n)!=1) return 0;
    long last = n - (n/10)*10;
    if(last<0) last = -last;
    printf("Last digit = %ld\n", last);
    return 0;
}
