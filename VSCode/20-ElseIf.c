#include<stdio.h>
int main()
{
    int x;
    printf("Enter n:");
    scanf("%d",&x);
    if(x>80)
    {
        printf("A\n");
    }
    else if (x>60)
    {
        printf("B\n");
    }
    else if(x>40)
    {
        printf("C\n");
    }
    else
    {
        printf("D\n");
    }
    
}