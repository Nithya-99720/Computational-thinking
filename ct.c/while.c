#include<stdio.h>
int main()
{
int n,i=1, sum=0;
printf("enter the value of n\n");
scanf("%d",&n);
while(i<=n) /*syntax while(expression){ body of the loop} initilization of the loop variable, condition
check, loop variable updation*/
{
sum=sum+i;
i=i+1;
}
printf("the sum=%d",sum);
}
