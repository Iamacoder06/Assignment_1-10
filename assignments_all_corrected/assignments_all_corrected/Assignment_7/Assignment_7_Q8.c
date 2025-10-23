#include <stdio.h>
#include <string.h>

/* Auto-generated: solution with only necessary headers included */


int main(){
    char s[500];
    if(fgets(s, sizeof(s), stdin)==NULL) return 0;
    if(s[0]=='\n') fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")]='\0';
    int i=0,j=0; while(s[j]) j++; j--;
    int pal=1; while(i<j){ if(s[i]!=s[j]){ pal=0; break; } i++; j--; }
    printf(pal?"Palindrome\n":"Not palindrome\n");
    return 0;
}
