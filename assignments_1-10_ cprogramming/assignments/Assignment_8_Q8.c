#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

// Merge sort implementation
void merge(int a[], int l, int m, int r){ int n1=m-l+1,n2=r-m; int L[n1],R[n2]; for(int i=0;i<n1;i++) L[i]=a[l+i]; for(int j=0;j<n2;j++) R[j]=a[m+1+j]; int i=0,j=0,k=l; while(i<n1 && j<n2){ if(L[i]<=R[j]) a[k++]=L[i++]; else a[k++]=R[j++]; } while(i<n1) a[k++]=L[i++]; while(j<n2) a[k++]=R[j++]; }
void merge_sort(int a[], int l, int r){ if(l<r){ int m=(l+r)/2; merge_sort(a,l,m); merge_sort(a,m+1,r); merge(a,l,m,r); }}
int main(){ int n; printf("Enter n: "); if(scanf("%d", &n)!=1) return 0; int a[n]; for(int i=0;i<n;i++) scanf("%d", &a[i]); merge_sort(a,0,n-1); printf("Sorted: "); for(int i=0;i<n;i++) printf("%d ", a[i]); printf("\n"); return 0; }
