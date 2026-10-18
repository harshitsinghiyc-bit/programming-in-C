#include<stdio.h>
int main()
{
  float p,r,t,si;
  printf("The principle is:");
  scanf("%f",&p);
  printf("The rate is:");
  scanf("%f",&r);
  printf("The time is:");
  scanf("%f",&t);
  si=(p*r*t)/100;   //simple interest=PRT/100
  printf("interest is:%f\n",si);
}