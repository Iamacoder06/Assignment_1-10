#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * Generated solution for the assignment question.
 * Simple, commented C implementation.
 */

int main(){
    // Q6: grade based on marks (simple mapping)
    int marks; printf("Enter marks (0-100): "); if(scanf("%d", &marks)!=1) return 0;
    if(marks>=90) printf("Grade A+\n");
    else if(marks>=80) printf("Grade A\n");
    else if(marks>=70) printf("Grade B\n");
    else if(marks>=60) printf("Grade C\n");
    else if(marks>=50) printf("Grade D\n");
    else printf("Fail\n");
    return 0;
}
