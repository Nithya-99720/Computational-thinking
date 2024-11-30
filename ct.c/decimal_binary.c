#include<stdio.h>
int main()
{
long b=0;
int n,i,r,temp=1;
printf("Enter a number n");
scanf("%d",&n);
while (n!=0){
r=n%2;
n=n/2;
b= b+r*temp;
temp=temp*10;
}
printf("Equivent Binary number is : %ld",b);
}

