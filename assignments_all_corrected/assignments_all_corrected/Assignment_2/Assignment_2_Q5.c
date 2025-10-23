#include <stdio.h>

/* Auto-generated: solution with only necessary headers included */


int main(){
    int y; if(scanf("%d", &y)!=1) return 0;
    int leap = (y%4==0 && (y%100!=0 || y%400==0));
    printf(leap?"Leap year\n":"Not a leap year\n");
    return 0;
}
