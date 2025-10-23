#include <stdio.h>
#include <math.h>

/* Auto-generated: solution with only necessary headers included */


int main(){
    double x1,y1,x2,y2;
    if(scanf("%lf %lf %lf %lf", &x1,&y1,&x2,&y2)!=4) return 0;
    double d = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    printf("Distance = %.6g\n", d);
    return 0;
}
