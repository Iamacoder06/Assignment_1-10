#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q4: pattern ABCDE / CDEF / EFG / GH / I  (we'll generate rows using consecutive letters)
    int rows=5; char start='A';
    int len = 5;
    for(int r=0;r<rows;r++){
        char c = start + 2*r; // as in sample
        for(int k=0;k<len-r;k++) printf("%c", c++);
        printf("\n");
    }
    return 0;
}
