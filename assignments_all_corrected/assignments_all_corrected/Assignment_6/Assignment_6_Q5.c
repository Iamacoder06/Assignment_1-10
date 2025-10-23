#include <stdio.h>

/* Auto-generated: solution with only necessary headers included */


int main(){
    int A[3][3], B[3][3];
    for(int i=0;i<3;i++) for(int j=0;j<3;j++) scanf("%d", &A[i][j]);
    for(int i=0;i<3;i++) for(int j=0;j<3;j++) scanf("%d", &B[i][j]);
    int sum[3][3], mul[3][3];
    for(int i=0;i<3;i++) for(int j=0;j<3;j++){ sum[i][j]=A[i][j]+B[i][j]; mul[i][j]=0; for(int k=0;k<3;k++) mul[i][j]+=A[i][k]*B[k][j]; }
    for(int i=0;i<3;i++){ for(int j=0;j<3;j++) printf("%d ", sum[i][j]); printf("\n"); }
    for(int i=0;i<3;i++){ for(int j=0;j<3;j++) printf("%d ", mul[i][j]); printf("\n"); }
    return 0;
}
