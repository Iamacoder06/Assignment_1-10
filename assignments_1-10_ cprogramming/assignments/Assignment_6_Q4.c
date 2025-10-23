#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q4: count frequency of each element (small n)
    int n; printf("Enter n: "); if(scanf("%d", &n)!=1) return 0;
    int a[n]; for(int i=0;i<n;i++) scanf("%d", &a[i]);
    int used=0;
    for(int i=0;i<n;i++){
        if(a[i]==INT_MIN) continue;
        int cnt=1;
        for(int j=i+1;j<n;j++) if(a[j]==a[i]){ cnt++; a[j]=INT_MIN; }
        printf("Element %d occurs %d times\n", a[i], cnt);
    }
    return 0;
}
