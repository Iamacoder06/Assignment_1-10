#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q3: copy elements of one array into another
    int n; printf("Enter n: "); if(scanf("%d", &n)!=1) return 0;
    int a[n], b[n]; for(int i=0;i<n;i++){ printf("a[%d]=", i); scanf("%d", &a[i]); }
    for(int i=0;i<n;i++) b[i]=a[i];
    printf("Copied array: "); for(int i=0;i<n;i++) printf("%d ", b[i]); printf("\n");
    return 0;
}
