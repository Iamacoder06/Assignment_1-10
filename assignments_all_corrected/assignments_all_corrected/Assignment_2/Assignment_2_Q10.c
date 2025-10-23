#include <stdio.h>

/* Auto-generated: solution with only necessary headers included */


int main(){
    int n; if(scanf("%d", &n)!=1) return 0;
    long a=0,b=1;
    for(int i=1;i<=n;i++){
        printf("%ld ", a);
        long nxt = a+b; a=b; b=nxt;
    }
    printf("\n");
    return 0;
}
