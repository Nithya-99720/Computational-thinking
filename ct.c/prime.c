#include<stdio.h>
int main()
{
int i=0,u,x,l;
printf(Enter lower limit );
scanf("%d",l);
printf(Enter upper limit );
scanf("%d",u);
printf("enter range of prime number");
scanf("%d",&n);
while(i<=n)
{
x=n%i;
if(x==0)
{
printf("the prime %d\n",x);
}
i++;
}
}
