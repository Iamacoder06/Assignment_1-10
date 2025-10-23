#include <stdio.h>
#include <string.h>

/* Auto-generated: solution with only necessary headers included */


int main(){
    char s[500], t[500];
    if(fgets(s, sizeof(s), stdin)==NULL) return 0;
    if(s[0]=='\n') fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")]='\0';
    // manual copy to avoid strcpy if not included
    int i=0; while((t[i]=s[i])!='\0') i++;
    printf("Copied string: %s\n", t);
    return 0;
}
