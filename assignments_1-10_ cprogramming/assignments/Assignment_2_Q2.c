#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q2: distance between (x1,y1) and (x2,y2)
    double x1,y1,x2,y2; printf("Enter x1 y1 x2 y2: "); if(scanf("%lf %lf %lf %lf", &x1,&y1,&x2,&y2)!=4) return 0;
    double d = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    printf("Distance = %.6g\n", d);
    return 0;
}
