#include <stdio.h>
#include <math.h>

/* Auto-generated: solution with only necessary headers included */


int main(){
    double a,b,c;
    if(scanf("%lf %lf %lf", &a,&b,&c)!=3) return 0;
    // Check using Pythagoras: a is opposite angle A
    double lhs = a*a;
    double rhs = b*b + c*c;
    if(fabs(lhs - rhs) < 1e-6) printf("Angle A is 90 degrees\n");
    else printf("Angle A is not 90 degrees\n");
    return 0;
}
