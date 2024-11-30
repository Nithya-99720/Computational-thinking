#include<stdio.h>
int main ()
{
int p=0,n,r;
printf("Enter a number 'n':\n");
scanf("%d",&n);
while (n>0){
r=n%10;
p=p*10+r
n=n/10;
}
if (n==p)
printf("They are palindrome");
else 
printf("They are not palindrome");
}
