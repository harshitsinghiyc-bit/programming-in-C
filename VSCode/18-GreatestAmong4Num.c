#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter a,b,c,d:");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b && a>c && a>d)
    {
        printf("a greater than all\n");
    }
    
    if(b>a && b>c && b>d)
    {
        printf("b greater than all\n");
    }
    
    if(c>b && c>a && c>d)
    {
        printf("c greater than all\n");
    }
   
    if(d>b && d>c && d>a)
    {
        printf("d greater than all\n");
    }
    
}