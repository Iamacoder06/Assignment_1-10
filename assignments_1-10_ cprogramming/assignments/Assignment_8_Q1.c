#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q1: concatenate two strings
    char a[500], b[500]; printf("Enter first string: "); fgets(a, sizeof(a), stdin); if(a[0]=='\n') fgets(a, sizeof(a), stdin); a[strcspn(a, "\n")]='\0';
    printf("Enter second string: "); fgets(b, sizeof(b), stdin); b[strcspn(b, "\n")]='\0';
    strcat(a,b);
    printf("Concatenated: %s\n", a);
    return 0;
}
