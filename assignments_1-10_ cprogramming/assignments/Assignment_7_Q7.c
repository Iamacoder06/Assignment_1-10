#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q7: reverse a string
    char s[500]; printf("Enter string: "); fgets(s, sizeof(s), stdin); if(s[0]=='\n') fgets(s, sizeof(s), stdin); s[strcspn(s, "\n")]='\0';
    int len = strlen(s);
    for(int i=len-1;i>=0;i--) putchar(s[i]); putchar('\n');
    return 0;
}
