#include<stdio.h>
int main(){
    int n1,n2;
    printf("enter 1st number : ");
    scanf("%d",&n1);
    printf("enter 2nd number : ");
    scanf("%d",&n2);
    printf("%d + %d : %d\n",n1,n2,n1+n2);
    printf("%d - %d : %d\n",n1,n2,n1-n2);
    printf("%d * %d : %d\n",n1,n2,n1*n2);
    if(n2!=0){
        printf("%d / %d : %d",n1,n2,n1/n2);
    }
    else {
        printf("this isn't posible");
    }
    return 0;
}