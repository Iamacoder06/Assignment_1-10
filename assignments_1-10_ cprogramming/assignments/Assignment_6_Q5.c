#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q5: matrix addition and multiplication for 3x3
    int A[3][3], B[3][3];
    printf("Enter 3x3 matrix A (9 ints):\n"); for(int i=0;i<3;i++) for(int j=0;j<3;j++) scanf("%d", &A[i][j]);
    printf("Enter 3x3 matrix B (9 ints):\n"); for(int i=0;i<3;i++) for(int j=0;j<3;j++) scanf("%d", &B[i][j]);
    int sum[3][3], mul[3][3];
    for(int i=0;i<3;i++) for(int j=0;j<3;j++){ sum[i][j]=A[i][j]+B[i][j]; mul[i][j]=0; for(int k=0;k<3;k++) mul[i][j]+=A[i][k]*B[k][j]; }
    printf("Sum:\n"); for(int i=0;i<3;i++){ for(int j=0;j<3;j++) printf("%d ", sum[i][j]); printf("\n"); }
    printf("Product:\n"); for(int i=0;i<3;i++){ for(int j=0;j<3;j++) printf("%d ", mul[i][j]); printf("\n"); }
    return 0;
}
