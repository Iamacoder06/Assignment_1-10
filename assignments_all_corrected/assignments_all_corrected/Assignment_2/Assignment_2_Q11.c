#include <stdio.h>

/* Auto-generated: solution with only necessary headers included */


int main(){
    int l,r; if(scanf("%d %d", &l,&r)!=2) return 0;
    if(l<2) l=2;
    for(int i=l;i<=r;i++){
        int isprime=1;
        for(int j=2;j*j<=i;j++) if(i%j==0){ isprime=0; break; }
        if(isprime) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
