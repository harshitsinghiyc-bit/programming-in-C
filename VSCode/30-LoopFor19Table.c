#include<stdio.h>
int main()
{
     for(int i=19;i<=190;i++)
     {
         if(i%19==0)
         {
             printf("%d\n",i);
         }
     }

    //user will give n

    int a;
    printf("enter number");
    scanf("%d",&a);
    for(int i=a;i<=a*10;i=i+a)
    {
        printf("%d\n",i);
    }
}