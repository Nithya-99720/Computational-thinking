# include<stdio.h>
int main()
{
int a,b,s,choice;
printf("enter any two  values ");
scanf("%d%d",&a,&b);
printf("1.add,2.sub,3.mux,4.divid\n");
printf("enter your choice\n");
scanf("%d",&choice);
switch (choice)
{
case 1:s=a+b;
    printf("%d",s);
    break;
case 2:s=a-b;
    printf("%d",s);
    break;
case 3:s=a*b;
    printf("%d",s);
    break;
case 4:s=a/b;
    printf("%d",s);    
    break;
default :printf("wrong choice");
}
}
