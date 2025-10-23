#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q3: pattern shown (decreasing stars with leading spaces)
    int N; printf("Enter N: "); if(scanf("%d", &N)!=1) return 0;
    for(int i=0;i<N;i++){
        for(int s=0;s<i;s++) printf(" ");
        for(int k=0;k<N-i;k++) printf("*");
        printf("\n");
    }
    return 0;
}
