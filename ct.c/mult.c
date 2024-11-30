#include<stdio.h>
int main()
{
int n,i=1,a,x;
printf("enter range ");
scanf("%d",&n);
printf("enter multiple");
scanf("%d",&a);
while(i<n)
{
x=i*a;
i++;
}
printf("%d",x);
}
