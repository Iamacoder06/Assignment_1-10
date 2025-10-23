#include <stdio.h>
#include <string.h>

/* Auto-generated: solution with only necessary headers included */


int main(){
    char s[500];
    if(fgets(s, sizeof(s), stdin)==NULL) return 0;
    if(s[0]=='\n') fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")]='\0';
    printf("Vowels found: ");
    for(size_t i=0;i<strlen(s);i++){ char c = s[i]; if(c>='A' && c<='Z') c = c - 'A' + 'a'; if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') printf("%c ", s[i]); }
    printf("\n");
    return 0;
}
