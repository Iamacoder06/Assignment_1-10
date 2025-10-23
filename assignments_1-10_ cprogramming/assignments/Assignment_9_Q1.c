#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int add_three(int a,int b,int c){ return a+b+c; }
int main(){ int a,b,c; printf("Enter three integers: "); if(scanf("%d %d %d", &a,&b,&c)!=3) return 0; printf("Sum = %d\n", add_three(a,b,c)); return 0; }
