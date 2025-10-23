#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q5: Pascal's triangle up to N rows
    int N; printf("Enter N: "); if(scanf("%d", &N)!=1) return 0;
    for(int i=0;i<N;i++){
        long val=1; for(int j=0;j<=i;j++){ if(j>0) val = val*(i-j+1)/j; printf("%ld ", val);} printf("\n"); }
    return 0;
}
