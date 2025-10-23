#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q2: triangular pattern increasing stars left aligned
    int N; printf("Enter N: "); if(scanf("%d", &N)!=1) return 0;
    for(int i=1;i<=N;i++){ for(int j=0;j<i;j++) printf("*"); printf("\n"); }
    return 0;
}
