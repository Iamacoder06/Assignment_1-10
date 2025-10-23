#include <stdio.h>

/* Auto-generated: solution with only necessary headers included */


int main() {
    long n; if(scanf("%ld", &n)!=1) return 0;
    int last = (int)( (n<0? -n : n) % 10 );
    long result = (n/10)*10 + (last*2)%10;
    printf("After doubling last digit (mod 10) = %ld\n", result);
    return 0;
}
