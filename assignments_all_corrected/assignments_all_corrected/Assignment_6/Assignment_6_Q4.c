#include <stdio.h>

/* Auto-generated: solution with only necessary headers included */


#include <limits.h>
int main(){
    int n; if(scanf("%d", &n)!=1) return 0;
    int a[n]; for(int i=0;i<n;i++) scanf("%d", &a[i]);
    for(int i=0;i<n;i++){
        if(a[i]==INT_MIN) { printf("Element %d occurs later (reserved)\n", a[i]); continue; }
        int cnt=1;
        for(int j=i+1;j<n;j++) if(a[j]==a[i]){ cnt++; a[j]=INT_MIN; }
        printf("Element %d occurs %d times\n", a[i], cnt);
    }
    return 0;
}
