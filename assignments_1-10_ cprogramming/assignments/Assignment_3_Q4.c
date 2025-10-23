#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q4: print left-aligned star pyramid with spaces between
    int N; printf("Enter N: "); if(scanf("%d", &N)!=1) return 0;
    for(int i=1;i<=N;i++){
        for(int j=0;j<i;j++){ if(j) printf(" "); printf("*"); }
        printf("\n");
    }
    return 0;
}
