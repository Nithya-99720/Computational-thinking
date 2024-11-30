#include<stdio.h>
int main()
{
int n,i=1, sum=0;
printf("enter the value of n\n");
scanf("%d",&n);
do //synatax do{body of the loop} while(condition);
{
sum=sum+i;
i=i+1;
}while(i<=n);
printf("the sum is=%d\n",sum);
}
