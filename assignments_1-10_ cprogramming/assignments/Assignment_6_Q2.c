#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q2: declare, read and display 2D array
    int r,c; printf("Enter rows cols: "); if(scanf("%d %d", &r,&c)!=2) return 0;
    int a[r][c]; for(int i=0;i<r;i++) for(int j=0;j<c;j++){ printf("a[%d][%d]=", i,j); scanf("%d", &a[i][j]); }
    printf("Matrix:\n"); for(int i=0;i<r;i++){ for(int j=0;j<c;j++) printf("%d ", a[i][j]); printf("\n"); }
    return 0;
}
