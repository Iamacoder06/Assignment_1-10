#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q3: find vowels in a string
    char s[500]; printf("Enter string: "); fgets(s, sizeof(s), stdin); if(s[0]=='\n') fgets(s, sizeof(s), stdin); s[strcspn(s, "\n")]='\0';
    printf("Vowels found: "); for(int i=0;i<strlen(s);i++){ char c=tolower(s[i]); if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') printf("%c ", s[i]); }
    printf("\n"); return 0;
}
