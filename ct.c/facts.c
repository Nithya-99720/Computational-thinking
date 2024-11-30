#include<stdio.h>
int main()
{
float n,i=1,r=1 ,sum=0.0,a;
printf("enter the value n:");
scanf("%f",&n);
while(i<=n)
{
r=r*i;
i++;
a=i/r;
sum+=a;
i=i+1.0;
{
printf("the sum of given series %f:%f\n",n,sum);
}
}
}
