#include <stdio.h>
#include <stdlib.h>

/* Auto-generated: solution with only necessary headers included */


int main() {
    long a,b;
    if(scanf("%ld %ld", &a,&b)!=2) return 0;
    long signA = a<0?-1:1, signB = b<0?-1:1;
    long aa = llabs(a), bb = llabs(b);
    int la = aa%10, lb = bb%10;
    aa = (aa/10)*10 + lb; bb = (bb/10)*10 + la;
    long product = (aa*signA)*(bb*signB);
    printf("After exchanging last digits: %ld and %ld\nProduct = %ld\n", aa*signA, bb*signB, product);
    return 0;
}
