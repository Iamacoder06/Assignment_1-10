#include <stdio.h>

/* Auto-generated: solution with only necessary headers included */


int main(){
    int N; if(scanf("%d", &N)!=1) return 0;
    for(int i=1;i<=N;i++){
        for(int s=0;s<N-i;s++) printf(" ");
        for(int k=0;k<2*i-1;k++) printf("*");
        printf("\n");
    }
    return 0;
}
