#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q5: number of even and odd position elements (positions start from 0)
    int n; printf("Enter n: "); if(scanf("%d", &n)!=1) return 0; int a[n]; for(int i=0;i<n;i++) scanf("%d", &a[i]);
    int evenPos=0, oddPos=0;
    for(int i=0;i<n;i++){ if(i%2==0) evenPos++; else oddPos++; }
    printf("Elements at even positions = %d\nElements at odd positions = %d\n", evenPos, oddPos);
    return 0;
}
