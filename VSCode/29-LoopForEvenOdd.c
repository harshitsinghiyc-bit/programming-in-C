#include<stdio.h>
int main()
{
    for(int i=1;i<=100;i=i+2)
    {
        printf("%d\n",i);
    }
       printf("end of odd\n");
    for(int x=2;x<=100;x=x+2)
    {
        printf("%d\n",x);
    }
       printf("end of even\n");
       // 2nd way
    for(int z=1;z<=100;z++)
    {
        if(z%2==0)
        {
            printf("even %d\n",z);
        }
        else
        {
            printf("odd %d\n",z);
        }

    }   
}