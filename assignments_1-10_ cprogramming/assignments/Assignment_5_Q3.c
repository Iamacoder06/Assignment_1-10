#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q3: 5x5 pattern with symmetric binary-like pattern for N=5 (given sample)
    int N; printf("Enter odd N (e.g.5): "); if(scanf("%d", &N)!=1) return 0;
    int mid = N/2;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==j && i==mid) printf("1");
            else if(i+j==N-1 && i==mid) printf("1");
            else if(i==j || i+j==N-1) printf("1");
            else printf("0");
        }
        printf("\n");
    }
    return 0;
}
