#include<stdio.h>
int main()
{
    int a;
    printf("Enter the no:");
    scanf("%d",&a);
    if(a%5==0)
    {
        if(a%3==0)
        {
            printf("this number is divisible by 5 and 3.\n");
        }
       else 
       printf("this number is not divisible by 5 and 3 .\n");
    }
    else
    {
       printf("the number is not divisible by 5 and 3\n");
    }
}