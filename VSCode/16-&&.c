#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    if(x>99 && x<1000)     //if x is larger than 99 and shorter than 1000
    {
        printf("This is a three digit no.\n");
    }
    else
    {
        printf("This is not three digit no.\n");
    }
}