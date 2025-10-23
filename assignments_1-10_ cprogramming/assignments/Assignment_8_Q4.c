#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q4: linear search of 5 elements
    int a[5]; printf("Enter 5 elements: "); for(int i=0;i<5;i++) scanf("%d", &a[i]); int key; printf("Enter key: "); scanf("%d", &key);
    int pos=-1; for(int i=0;i<5;i++) if(a[i]==key){ pos=i; break; }
    if(pos==-1) printf("Not found\n"); else printf("Found at index %d\n", pos);
    return 0;
}
