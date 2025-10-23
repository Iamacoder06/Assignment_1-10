#include <stdio.h>

/* Auto-generated: solution with only necessary headers included */


int is_armstrong(int n){ int sum=0, t=n; while(t){ int d=t%10; sum += d*d*d; t/=10; } return sum==n; }
int main(){ int n; if(scanf("%d", &n)!=1) return 0; printf(is_armstrong(n)?"Armstrong\n":"Not Armstrong\n"); return 0; }
