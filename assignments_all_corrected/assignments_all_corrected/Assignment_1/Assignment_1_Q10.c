#include <stdio.h>

/* Auto-generated: solution with only necessary headers included */


int main() {
    int x,y; if(scanf("%d %d", &x,&y)!=2) return 0;
    // using third variable
    int t = x; x = y; y = t;
    printf("After swap using third variable: x=%d y=%d\n", x,y);
    // swap back without third variable (arithmetic)
    x = x + y; y = x - y; x = x - y;
    printf("After swap without third variable: x=%d y=%d\n", x,y);
    return 0;
}
