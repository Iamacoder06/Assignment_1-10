#include <stdio.h>

/* Auto-generated: solution with only necessary headers included */


int main(){
    int N=5;
    for(int i=0;i<N;i++){
        char ch = 'A' + i;
        for(int k=0;k<2*i+1;k++) printf("%c", ch+k);
        printf("\n");
    }
    return 0;
}
