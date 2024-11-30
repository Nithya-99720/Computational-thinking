#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,r1,r2,R1,R2,d;
char ch;
printf("Enter value of a, b and c\n");
scanf("%d%d%d",&a,&b,&c);
d=b*b-4*a*c;
//printf("%d",d);
if(d==0)
ch=1;
else
ch=2;

switch(ch){
case 1:
  printf("two roots are equal");
  r1=-b/2*(a);
  r2=-d/2*(a);
  printf("%d\n%d",r1,r2);
  break;
case 2:
  printf("two roots are disctrict roots");
  //R1=-b+sqrt(d)/2*(a);
 // R2=-b-sqrt(d)/2*(a);*/
  printf("%d\n%d",R1,R2);
  break;
default :
   printf("invalid value of x");
   }
}
