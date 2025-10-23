#include <stdio.h>
#include <string.h>

/* Auto-generated: solution with only necessary headers included */


int main(){
    char a[500], b[500];
    if(fgets(a, sizeof(a), stdin)==NULL) return 0;
    if(a[0]=='\n') fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")]='\0';
    if(fgets(b, sizeof(b), stdin)==NULL) return 0;
    b[strcspn(b, "\n")]='\0';
    int r = strcmp(a,b);
    if(r==0) printf("Equal\n"); else if(r<0) printf("First < Second\n"); else printf("First > Second\n");
    return 0;
}
