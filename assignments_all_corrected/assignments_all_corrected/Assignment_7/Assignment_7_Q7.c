#include <stdio.h>
#include <string.h>

/* Auto-generated: solution with only necessary headers included */


int main(){
    char s[500];
    if(fgets(s, sizeof(s), stdin)==NULL) return 0;
    if(s[0]=='\n') fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")]='\0';
    int len = 0; while(s[len]) len++;
    for(int i=len-1;i>=0;i--) putchar(s[i]);
    putchar('\n');
    return 0;
}
