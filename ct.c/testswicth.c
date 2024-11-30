#include <stdio.h>
int main()
{
int a,b,s;
char ch=' ';
printf("enter any two  values ");
scanf("%d%d",&a,&b);
printf("he choice\n ");
scanf(" %c",&ch);
switch (ch)
{
case '+': 
s=a+b;
printf("%d",s);
break;
case '-': 
s=a-b;
printf("%d",s);
break;
case '*': 
s=a*b;
printf("%d",s);
break;
default:
printf("wrong choice");

}
}
