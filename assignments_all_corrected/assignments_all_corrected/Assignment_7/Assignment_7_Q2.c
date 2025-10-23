#include <stdio.h>

/* Auto-generated: solution with only necessary headers included */


int main(){
    int n; if(scanf("%d", &n)!=1) return 0;
    int a[n]; for(int i=0;i<n;i++) scanf("%d", &a[i]);
    int mid = n/2;
    for(int i=0;i<mid;i++) printf("%d ", a[i]);
    printf("\n");
    for(int i=mid;i<n;i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
