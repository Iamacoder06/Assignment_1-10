#include <stdio.h>

/* Auto-generated: solution with only necessary headers included */


int main(){
    int N; if(scanf("%d", &N)!=1) return 0;
    int mid = N/2;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==j && i==mid) printf("1");
            else if(i+j==N-1 && i==mid) printf("1");
            else if(i==j || i+j==N-1) printf("1");
            else printf("0");
        }
        printf("\n");
    }
    return 0;
}
