#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q2: split an array: split into two halves
    int n; printf("Enter n: "); if(scanf("%d", &n)!=1) return 0; int a[n]; for(int i=0;i<n;i++) scanf("%d", &a[i]);
    int mid = n/2;
    printf("First half: "); for(int i=0;i<mid;i++) printf("%d ", a[i]); printf("\nSecond half: "); for(int i=mid;i<n;i++) printf("%d ", a[i]); printf("\n");
    return 0;
}
