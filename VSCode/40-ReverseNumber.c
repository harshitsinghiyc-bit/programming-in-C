#include<stdio.h>
int main(){
    int n;
    printf("Enter an number:");
    scanf("%d",&n);
    int r=0;
    while(n!=0)
    {   
        r=r*10;
        r=r+(n%10);
        n=n/10;
    }
    printf("the reversed digit are %d\n",r);
    return 0;
}