#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int is_peterson(int n){
    // Peterson number: sum of factorials of digits equals number
    int t=n, sum=0; int fact[10]; fact[0]=1; for(int i=1;i<10;i++) fact[i]=fact[i-1]*i;
    while(t){ sum += fact[t%10]; t/=10; }
    return sum==n;
}
int main(){ int n; printf("Enter integer: "); if(scanf("%d", &n)!=1) return 0; printf(is_peterson(n)?"Peterson\n":"Not Peterson\n"); return 0; }
