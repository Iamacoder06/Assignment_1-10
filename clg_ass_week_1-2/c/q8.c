#include<stdio.h>
int main(){
    int c;
    float f;
    printf("enter celsius : ");
    scanf("%d",&c);
    f=((c/5)*9)+32;
    printf("fahrenheit is : %f",f);
    return 0;
}