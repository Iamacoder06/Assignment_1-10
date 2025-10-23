#include <stdio.h>

/* Auto-generated: solution with only necessary headers included */


int main(){
    int n; if(scanf("%d", &n)!=1) return 0;
    int a[n]; for(int i=0;i<n;i++) scanf("%d", &a[i]);
    int x; scanf("%d", &x);
    int found=0; for(int i=0;i<n;i++) if(a[i]==x){ found=1; break; }
    printf(found?"Present\n":"Not present\n"); return 0;
}
