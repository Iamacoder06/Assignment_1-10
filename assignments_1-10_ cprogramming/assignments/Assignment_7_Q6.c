#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q6: accept name and print using string
    char name[200]; printf("Enter your name: "); fgets(name, sizeof(name), stdin); if(name[0]=='\n') fgets(name, sizeof(name), stdin);
    // remove trailing newline
    name[strcspn(name, "\n")] = '\0';
    printf("Your name is: %s\n", name);
    return 0;
}
