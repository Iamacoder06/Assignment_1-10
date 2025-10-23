#include <stdio.h>

/* Auto-generated: solution with only necessary headers included */


int main(){
    int N; if(scanf("%d", &N)!=1) return 0;
    for(int i=0;i<N;i++){
        long val=1;
        for(int j=0;j<=i;j++){
            if(j>0) val = val*(i-j+1)/j;
            printf("%ld ", val);
        }
        printf("\n");
    }
    return 0;
}
