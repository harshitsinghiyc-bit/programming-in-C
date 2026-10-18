//wap to print sum of digit of a given number
#include<stdio.h>
int main(){
    int n;
    printf("Enter an number:");
    scanf("%d",&n);
    int sum=0;     //
    int lastdigit=0;
    while(n!=0)
    {   lastdigit=n%10;    //   by this we got last number of given digits
        sum=sum+lastdigit; //   we get first 0+last digit,
        n=n/10;            //   1 digit is less
    }
    printf("the sum of digit are %d\n",sum);
}
