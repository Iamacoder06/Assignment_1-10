#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q9: selection sort
    int n; printf("Enter n: "); if(scanf("%d", &n)!=1) return 0; int a[n]; for(int i=0;i<n;i++) scanf("%d", &a[i]);
    for(int i=0;i<n-1;i++){ int min=i; for(int j=i+1;j<n;j++) if(a[j]<a[min]) min=j; int t=a[i]; a[i]=a[min]; a[min]=t; }
    printf("Sorted: "); for(int i=0;i<n;i++) printf("%d ", a[i]); printf("\n"); return 0;
}
