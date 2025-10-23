#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q2: compare two strings
    char a[500], b[500]; printf("Enter first string: "); fgets(a, sizeof(a), stdin); if(a[0]=='\n') fgets(a, sizeof(a), stdin); a[strcspn(a, "\n")]='\0';
    printf("Enter second string: "); fgets(b, sizeof(b), stdin); b[strcspn(b, "\n")]='\0';
    int r = strcmp(a,b);
    if(r==0) printf("Equal\n"); else if(r<0) printf("First < Second\n"); else printf("First > Second\n");
    return 0;
}
