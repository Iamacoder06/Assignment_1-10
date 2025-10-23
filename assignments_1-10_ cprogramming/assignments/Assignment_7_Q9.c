#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q9: find length of string
    char s[500]; printf("Enter string: "); fgets(s, sizeof(s), stdin); if(s[0]=='\n') fgets(s, sizeof(s), stdin); s[strcspn(s, "\n")]='\0';
    printf("Length = %zu\n", strlen(s)); return 0;
}
