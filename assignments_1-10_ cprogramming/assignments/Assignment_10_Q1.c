#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int is_armstrong(int n){ int sum=0, t=n; while(t){ int d=t%10; sum += d*d*d; t/=10; } return sum==n; }
int main(){ int n; printf("Enter integer: "); if(scanf("%d", &n)!=1) return 0; printf(is_armstrong(n)?"Armstrong\n":"Not Armstrong\n"); return 0; }
