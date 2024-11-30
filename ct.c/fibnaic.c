#include<stdio.h>
int main()
{
int i=0,n,a=0,b=1,f;
printf("range of fibnaoic series");
scanf("%d",&n);
while(i<n-2)
{
f=a+b;
a=b;
b=f;
i++;
}
printf("%d\n",f);
}
