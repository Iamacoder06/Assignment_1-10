#include <stdio.h>

int main() {
 int a ,b , ld1 , ld2 , prod ;
 printf("enter first number : ");
 scanf("%d",&a);
 printf("enter second number : ");
 scanf("%d",&b);
 ld1 = (a/10)*10 + (b%10);
 ld2 = (b/10)*10 + (a%10);
 prod = ld1 * ld2 ;
 printf("the first number after exchanging the last digit is :%d\n",ld1);
 printf("the second number after exchanging the last digit is :%d\n",ld2);
 printf("the product of the two numbers after exchanging the last digits  is : %d",prod);
 

    return 0;
}
