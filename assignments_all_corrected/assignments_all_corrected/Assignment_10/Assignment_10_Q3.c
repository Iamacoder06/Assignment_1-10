#include <stdio.h>

/* Auto-generated: solution with only necessary headers included */


struct Student{ char name[100]; int marks; };
int main(){ int n; if(scanf("%d", &n)!=1) return 0; struct Student s[n]; for(int i=0;i<n;i++){ scanf("%99s %d", s[i].name, &s[i].marks); } for(int i=0;i<n;i++) printf("Name: %s, Marks: %d\n", s[i].name, s[i].marks); return 0; }
