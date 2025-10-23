#include <stdio.h>

/* Auto-generated: solution with only necessary headers included */


int main(){
    int n,m; if(scanf("%d %d", &n,&m)!=2) return 0;
    int a[n], b[m]; for(int i=0;i<n;i++) scanf("%d", &a[i]); for(int j=0;j<m;j++) scanf("%d", &b[j]);
    for(int i=0;i<n;i++) printf("%d ", a[i]);
    for(int j=0;j<m;j++) printf("%d ", b[j]);
    printf("\n"); return 0;
}
