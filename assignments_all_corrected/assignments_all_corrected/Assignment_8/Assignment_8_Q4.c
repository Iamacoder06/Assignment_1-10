#include <stdio.h>

/* Auto-generated: solution with only necessary headers included */


int main(){
    int a[5]; for(int i=0;i<5;i++) scanf("%d", &a[i]);
    int key; scanf("%d", &key);
    int pos=-1; for(int i=0;i<5;i++) if(a[i]==key){ pos=i; break; }
    if(pos==-1) printf("Not found\n"); else printf("Found at index %d\n", pos);
    return 0;
}
