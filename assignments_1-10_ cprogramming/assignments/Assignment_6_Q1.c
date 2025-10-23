#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q1: declare, read and display 1D array
    int n; printf("Enter n: "); if(scanf("%d", &n)!=1) return 0;
    int a[n]; for(int i=0;i<n;i++){ printf("a[%d]=", i); scanf("%d", &a[i]); }
    printf("Array: "); for(int i=0;i<n;i++) printf("%d ", a[i]); printf("\n");
    return 0;
}
