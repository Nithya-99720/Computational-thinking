#include<stdio.h>
int sum();
int main()
{
int r;
r=sum();
printf("r = %d",r);
}

int sum()
{
  int a,b,s;
  printf("Enter any two numbers");
  scanf("%d%d",&a,&b);
  s=a+b;
  printf("sum = %d",s);
  return(s);
  }
