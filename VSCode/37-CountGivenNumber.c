//wap to count digits of a given number
#include<stdio.h>
int main(){
    int n;
    printf("Enter an number:");
    scanf("%d",&n);
    int count=0;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("the no. of digitd are %d\n",count);


}