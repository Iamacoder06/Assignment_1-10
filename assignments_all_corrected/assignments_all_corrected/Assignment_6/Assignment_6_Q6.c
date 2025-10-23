#include <stdio.h>

/* Auto-generated: solution with only necessary headers included */


int main(){
    int n; if(scanf("%d", &n)!=1) return 0;
    int a[n]; for(int i=0;i<n;i++) scanf("%d", &a[i]);
    int mx=a[0], mn=a[0];
    for(int i=1;i<n;i++){ if(a[i]>mx) mx=a[i]; if(a[i]<mn) mn=a[i]; }
    printf("Largest = %d\nSmallest = %d\n", mx, mn);
    return 0;
}
