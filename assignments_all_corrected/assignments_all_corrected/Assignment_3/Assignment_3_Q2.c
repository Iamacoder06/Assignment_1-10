#include <stdio.h>

/* Auto-generated: solution with only necessary headers included */


int main(){
    int N; if(scanf("%d", &N)!=1) return 0;
    for(int i=1;i<=N;i++){ for(int j=0;j<i;j++) printf("*"); printf("\n"); }
    return 0;
}
