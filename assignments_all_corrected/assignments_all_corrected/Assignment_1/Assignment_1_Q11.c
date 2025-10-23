#include <stdio.h>
#include <math.h>

/* Auto-generated: solution with only necessary headers included */


int main() {
    double val; char type;
    if(scanf("%lf %c", &val, &type)!=2) return 0;
    if(type=='F' || type=='f') {
        double c = (val - 32.0) * 5.0/9.0;
        printf("%.2f F = %.2f C\n", val, c);
    } else if(type=='C' || type=='c') {
        double f = val * 9.0/5.0 + 32.0;
        printf("%.2f C = %.2f F\n", val, f);
    } else printf("Unknown type. Use C or F.\n");
    return 0;
}
