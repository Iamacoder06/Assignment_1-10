#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q10: Fibonacci numbers for given range (generate up to n terms)
    int n; printf("Enter number of terms (>=1): "); if(scanf("%d", &n)!=1) return 0;
    long a=0,b=1;
    for(int i=1;i<=n;i++){
        printf("%ld ", a);
        long nxt = a+b; a=b; b=nxt;
    }
    printf("\n");
    return 0;
}
