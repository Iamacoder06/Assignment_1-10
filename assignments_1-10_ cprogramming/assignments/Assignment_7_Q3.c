#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q3: merge two arrays
    int n,m; printf("Enter size of first and second arrays: "); if(scanf("%d %d", &n,&m)!=2) return 0;
    int a[n], b[m]; for(int i=0;i<n;i++) scanf("%d", &a[i]); for(int j=0;j<m;j++) scanf("%d", &b[j]);
    printf("Merged: "); for(int i=0;i<n;i++) printf("%d ", a[i]); for(int j=0;j<m;j++) printf("%d ", b[j]); printf("\n");
    return 0;
}
