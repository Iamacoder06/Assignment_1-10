#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q2: 1 / 12 / 123 ... up to N
    int N; printf("Enter N: "); if(scanf("%d", &N)!=1) return 0;
    for(int i=1;i<=N;i++){ for(int j=1;j<=i;j++) printf("%d", j); printf("\n"); }
    return 0;
}
