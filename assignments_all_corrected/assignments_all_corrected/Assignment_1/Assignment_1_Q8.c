#include <stdio.h>
#include <string.h>

/* Auto-generated: solution with only necessary headers included */


int main() {
    // Interpret as inserting digit '1' immediately after decimal point of printed representation
    double x;
    if(scanf("%lf", &x)!=1) return 0;
    long ip = (long)x;
    char buf[64];
    // get fractional part as string
    snprintf(buf, sizeof(buf), "%.12g", x);
    char *p = strchr(buf, '.');
    if(!p) printf("%ld.1\n", ip);
    else printf("%ld.1%s\n", ip, p+1);
    return 0;
}
