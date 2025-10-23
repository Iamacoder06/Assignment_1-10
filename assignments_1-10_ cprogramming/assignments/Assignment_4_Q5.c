#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q5: A / BC / CDE / DEFG / EFGHI
    int N=5; for(int i=0;i<N;i++){
        char ch = 'A' + i;
        for(int k=0;k<2*i+1;k++) printf("%c", ch+k);
        printf("\n");
    }
    return 0;
}
