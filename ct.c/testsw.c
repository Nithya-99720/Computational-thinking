#include<stdio.h>
int main()
{
int a,b,c;
char op;
//printf("1: Addition 2: Sub 3: Mul 4: Div\n");
printf("Enter a\n");
scanf("%d",&a);
printf("Enter b\n");
scanf("%d",&b);
printf("Enter your operator\n");
scanf(" %c",&op);
switch(op){
case '+': c=a+b; //syntax: case value1: statements; break;
        printf("The result is=%d\n",c);
        break;
case '-': c=a-b; //syntax: case value2: statements; break;
         printf("The result is=%d\n",c);
         break;
case '*': c=a*b; //syntax: case value3: statements; break;
         printf("The result is=%d\n",c);
         break;
case '/':c=a/b; //syntax: case value4: statements; break;
         printf("The result is=%d\n",c);
         break;
default: printf("invalid choice\n"); //syntax: default : statemnets;
}
}
