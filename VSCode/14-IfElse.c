#include<stdio.h>
void main()
{
    int x;
    printf("Enter th no:");
    scanf("%d",&x);
    if  (x%2==0)
    {
    printf("The number %d is even. \n",x);
    }

    else
    { 
    printf("The number %d is odd. \n",x);
    }
}