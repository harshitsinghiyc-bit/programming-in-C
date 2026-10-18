#include<stdio.h>
void main()
{
 int x;

 printf("Enter the number:");
 scanf("%d",&x);
 if(x%5==0 || x%3==0)             //this x can be divisible by 5 or 3
 {
    printf("The number is divisible by either 5 or 3.\n");
 }
 else
 {
    printf("The number is not divisible by either 5 or 3.\n");
 }
}