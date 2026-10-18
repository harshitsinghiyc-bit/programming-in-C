#include<stdio.h>
int main()
{   //4 7 10 13 upto n number of terms
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int a=4;
    for(int i=1;i<=n;i++)
       {
        printf("%d\n",a);
        a=a+3;
       }
}