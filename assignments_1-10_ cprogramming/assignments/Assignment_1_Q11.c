#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main() {
    // Q11: Fahrenheit <-> Celsius conversion
    double val; char type;
    printf("Enter value followed by C or F (e.g. 100 F): ");
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
