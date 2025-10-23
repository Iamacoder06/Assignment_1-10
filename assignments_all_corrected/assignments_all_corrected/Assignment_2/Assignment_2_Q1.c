#include <stdio.h>
#include <math.h>

/* Auto-generated: solution with only necessary headers included */


int main(){
    double a,b,c;
    if(scanf("%lf %lf %lf", &a,&b,&c)!=3) return 0;
    double s = (a+b+c)/2.0;
    double area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area = %.6g\n", area);
    return 0;
}
