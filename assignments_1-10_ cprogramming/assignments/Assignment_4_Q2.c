#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q2: inverted centered pyramid
    int N; printf("Enter N: "); if(scanf("%d", &N)!=1) return 0;
    for(int i=N;i>=1;i--){ for(int s=0;s<N-i;s++) printf(" "); for(int k=0;k<2*i-1;k++) printf("*"); printf("\n"); }
    return 0;
}
