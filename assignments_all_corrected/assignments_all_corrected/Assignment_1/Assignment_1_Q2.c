#include <stdio.h>
#include <stdlib.h>

/* Auto-generated: solution with only necessary headers included */


int main() {
    // last digit and delete last digit
    long n;
    if(scanf("%ld", &n)!=1) return 0;
    long last = llabs(n) % 10;
    long deleted = n / 10;
    printf("Last digit = %ld\nAfter deleting last digit = %ld\n", last, deleted);
    return 0;
}
