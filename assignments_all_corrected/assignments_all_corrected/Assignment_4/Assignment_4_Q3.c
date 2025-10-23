#include <stdio.h>

/* Auto-generated: solution with only necessary headers included */


int main(){
    int N=4;
    for(int i=0;i<N;i++){
        char ch = 'A' + i;
        for(int j=0;j<=i;j++) printf("%c", ch);
        printf("\n");
    }
    return 0;
}
