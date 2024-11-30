#include<stdio.h>
int square(int);
int main()
{
int num, res;
printf("Enter a number\n");
scanf("%d", &num);
res=square(num);
printf("Square of %d = %d", num, res);
}
int square(int x)
{
return (x*x);
}
