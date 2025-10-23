#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q4: check element presence in array
    int n; printf("Enter n: "); if(scanf("%d", &n)!=1) return 0; int a[n]; for(int i=0;i<n;i++) scanf("%d", &a[i]); int x; printf("Enter element to search: "); scanf("%d", &x);
    int found=0; for(int i=0;i<n;i++) if(a[i]==x){ found=1; break; }
    printf(found?"Present\n":"Not present\n");
    return 0;
}
