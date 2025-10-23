#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q5: binary search (array must be sorted). We'll read 5 elements sorted ascending
    int a[5]; printf("Enter 5 sorted elements: "); for(int i=0;i<5;i++) scanf("%d", &a[i]); int key; printf("Enter key: "); scanf("%d", &key);
    int l=0,r=4, found=-1;
    while(l<=r){ int m=(l+r)/2; if(a[m]==key){ found=m; break; } else if(a[m]<key) l=m+1; else r=m-1; }
    if(found==-1) printf("Not found\n"); else printf("Found at index %d\n", found);
    return 0;
}
