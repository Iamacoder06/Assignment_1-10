#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q8: check whether a string is palindrome
    char s[500]; printf("Enter string: "); fgets(s, sizeof(s), stdin); if(s[0]=='\n') fgets(s, sizeof(s), stdin); s[strcspn(s, "\n")]='\0';
    int i=0,j=strlen(s)-1; int pal=1; while(i<j){ if(s[i]!=s[j]){ pal=0; break; } i++; j--; }
    printf(pal?"Palindrome\n":"Not palindrome\n"); return 0;
}
