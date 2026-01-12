#include<stdio.h>
int main (){
    int s1,s2,s3,s4,s5,t;
    float p;
    printf("enter s1 : ");
    scanf("%d",&s1);
    printf("enter s2 : ");
    scanf("%d",&s2);
    printf("enter s3 : ");
    scanf("%d",&s3);
    printf("enter s4 : ");
    scanf("%d",&s4);
    printf("enter s5 : ");
    scanf("%d",&s5);

    t=s1+s2+s3+s4+s5;
    p=(t/500)*100;

    printf("total is : %d",t);
    printf("percentage is : %f",p);

    return 0;
}