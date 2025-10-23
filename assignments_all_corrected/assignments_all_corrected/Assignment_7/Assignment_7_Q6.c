#include <stdio.h>
#include <string.h>

/* Auto-generated: solution with only necessary headers included */


int main(){
    char name[200];
    // consume leftover newline if any
    if(fgets(name, sizeof(name), stdin)==NULL) return 0;
    if(name[0]=='\n') fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    printf("Your name is: %s\n", name);
    return 0;
}
