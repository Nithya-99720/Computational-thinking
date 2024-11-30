#include<stdio.h>
int sum();
int a,b,s;
int main()

{
int r;
r=sum(a,b);
printf("r=%d",r);

}

int sum(int a,int b)
{
  
  printf("Enter any two numbers");
  scanf("%d%d",&a,&b);
  s=a+b;
  printf("sum = %d\n",s);
  return (s);
}
