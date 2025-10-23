#include <stdio.h>

/* Auto-generated: solution with only necessary headers included */


int main(){
    int n; if(scanf("%d", &n)!=1) return 0;
    int a[n], b[n];
    for(int i=0;i<n;i++) scanf("%d", &a[i]);
    for(int i=0;i<n;i++) b[i] = a[i];
    for(int i=0;i<n;i++) printf("%d ", b[i]);
    printf("\n");
    return 0;
}
