#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q3: print letters pattern A, BB, CCC ...
    int N=4; // as example, print first 4 lines
    for(int i=0;i<N;i++){
        char ch = 'A' + i;
        for(int j=0;j<=i;j++) printf("%c", ch);
        printf("\n");
    }
    return 0;
}
