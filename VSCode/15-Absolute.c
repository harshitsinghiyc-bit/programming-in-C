#include<stdio.h>
int main()
{
    int x;
    printf("enter no.");
    scanf("%d",&x);
    if(x<0)
    {
        x=x*(-1);
    }    
    printf("the absolute no. is %d\n",x);
}