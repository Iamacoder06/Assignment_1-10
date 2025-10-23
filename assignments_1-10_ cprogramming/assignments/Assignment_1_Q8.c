#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main() {
    // Q8: insert 1 as first digit after decimal. Interpret as working with a float
    double x; printf("Enter a number (floating): "); if(scanf("%lf", &x)!=1) return 0;
    double frac = x - (long)x; // fractional part
    // Build new fractional with leading 1: e.g. if frac=0.345 -> new = 0.1345? ambiguous. We'll interpret as placing digit '1' immediately after decimal and shifting existing digits right.
    // Convert frac to string to preserve digits
    char buf[64]; snprintf(buf, sizeof(buf), "%.12g", frac);
    // Simple approach: print integer part and ".1" then fractional digits without leading "0."
    long ip=(long)x;
    const char *p = strchr(buf, '.');
    if(!p) printf("%ld.1\n", ip);
    else printf("%ld.1%s\n", ip, p+1);
    return 0;
}
