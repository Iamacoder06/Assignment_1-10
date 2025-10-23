#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q10: copy one string to another
    char s[500], t[500]; printf("Enter source string: "); fgets(s, sizeof(s), stdin); if(s[0]=='\n') fgets(s, sizeof(s), stdin); s[strcspn(s, "\n")]='\0';
    strcpy(t, s);
    printf("Copied string: %s\n", t);
    return 0;
}
