#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q5: leap year test
    int y; printf("Enter year: "); if(scanf("%d", &y)!=1) return 0;
    int leap = (y%4==0 && (y%100!=0 || y%400==0));
    printf(leap?"Leap year\n":"Not a leap year\n");
    return 0;
}
