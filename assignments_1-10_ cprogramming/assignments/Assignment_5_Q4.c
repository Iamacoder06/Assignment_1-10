#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q4: palindromic number pyramid: 1 / 121 / 12321 ... up to N rows
    int N; printf("Enter N: "); if(scanf("%d", &N)!=1) return 0;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++) printf("%d", j);
        for(int j=i-1;j>=1;j--) printf("%d", j);
        printf("\n");
    }
    return 0;
}
