#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q6: find largest and smallest element in array
    int n; printf("Enter n: "); if(scanf("%d", &n)!=1) return 0;
    int a[n]; for(int i=0;i<n;i++) scanf("%d", &a[i]);
    int mx=a[0], mn=a[0]; for(int i=1;i<n;i++){ if(a[i]>mx) mx=a[i]; if(a[i]<mn) mn=a[i]; }
    printf("Largest = %d\nSmallest = %d\n", mx, mn);
    return 0;
}
