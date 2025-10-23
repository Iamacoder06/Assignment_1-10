#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q1: print square pattern of '*' N lines, each line has N stars right-aligned? We'll print a block of NxN stars aligned to right with padding
    int N; printf("Enter N: "); if(scanf("%d", &N)!=1) return 0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++) printf("*");
        printf("\n");
    }
    return 0;
}
