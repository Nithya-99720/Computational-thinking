#include<stdio.h>
void sum();
int main()
{
sum();
}

void sum()
{
  int a,b,s;
  printf("Enter any two numbers");
  scanf("%d%d",&a,&b);
  s=a+b;
  printf("sum = %d",s);
}
