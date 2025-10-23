#include <stdio.h>

/* Auto-generated: solution with only necessary headers included */


int main(){
    int N=5;
    for(int i=0;i<N;i++){
        char ch='A';
        for(int k=0;k<=i;k++){ printf("%c", ch); ch+=2; }
        printf("\n");
    }
    return 0;
}
