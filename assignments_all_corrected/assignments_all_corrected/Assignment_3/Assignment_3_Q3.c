#include <stdio.h>

/* Auto-generated: solution with only necessary headers included */


int main(){
    int N; if(scanf("%d", &N)!=1) return 0;
    for(int i=0;i<N;i++){
        for(int s=0;s<i;s++) printf(" ");
        for(int k=0;k<N-i;k++) printf("*");
        printf("\n");
    }
    return 0;
}
