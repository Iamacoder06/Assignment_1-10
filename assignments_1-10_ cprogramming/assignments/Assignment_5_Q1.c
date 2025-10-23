#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q1: A / AC / ACE / ACEG ...
    int N=5; for(int i=0;i<N;i++){
        char ch='A'; for(int k=0;k<=i;k++){ printf("%c", ch); ch+=2; } printf("\n"); }
    return 0;
}
