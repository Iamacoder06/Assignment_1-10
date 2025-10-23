#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

#include <stdio.h>
struct Student{ char name[100]; int marks; };
int main(){ int n; printf("Enter number of students: "); if(scanf("%d", &n)!=1) return 0; struct Student s[n];
    for(int i=0;i<n;i++){ printf("Enter name (single word) and marks: "); scanf("%99s %d", s[i].name, &s[i].marks); }
    printf("Stored students:\n"); for(int i=0;i<n;i++) printf("%s %d\n", s[i].name, s[i].marks);
    return 0; }
