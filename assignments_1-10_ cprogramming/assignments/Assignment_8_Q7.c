#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

void insertion_sort(int a[], int n){ for(int i=1;i<n;i++){ int key=a[i], j=i-1; while(j>=0 && a[j]>key){ a[j+1]=a[j]; j--; } a[j+1]=key; }}
int main(){ int n; printf("Enter n: "); if(scanf("%d", &n)!=1) return 0; int a[n]; for(int i=0;i<n;i++) scanf("%d", &a[i]); insertion_sort(a,n); printf("Sorted: "); for(int i=0;i<n;i++) printf("%d ", a[i]); printf("\n"); return 0; }
