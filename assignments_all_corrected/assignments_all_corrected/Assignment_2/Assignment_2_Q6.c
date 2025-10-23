#include <stdio.h>

/* Auto-generated: solution with only necessary headers included */


int main(){
    int marks; if(scanf("%d", &marks)!=1) return 0;
    if(marks>=90) printf("Grade A+\n");
    else if(marks>=80) printf("Grade A\n");
    else if(marks>=70) printf("Grade B\n");
    else if(marks>=60) printf("Grade C\n");
    else if(marks>=50) printf("Grade D\n");
    else printf("Fail\n");
    return 0;
}
