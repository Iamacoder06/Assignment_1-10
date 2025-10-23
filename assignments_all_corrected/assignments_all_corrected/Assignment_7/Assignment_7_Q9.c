#include <stdio.h>
#include <string.h>

/* Auto-generated: solution with only necessary headers included */


int main(){
    char s[500];
    if(fgets(s, sizeof(s), stdin)==NULL) return 0;
    if(s[0]=='\n') fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")]='\0';
    size_t len = 0; while(s[len]) len++;
    printf("Length = %zu\n", len);
    return 0;
}
