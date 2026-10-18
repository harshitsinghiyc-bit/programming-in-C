#include<stdio.h>
int main()
{
    int n ,fact =1;
    printf("enter an number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fact = fact*i;
    }
    printf("the factorial is :%d\n",fact);
    return 0;
}