#include<stdio.h>
#include<math.h>
int main()
{
  int n,r,a,sum=0;
  
  printf("Enter a number 'n':\n");
  scanf("%d",&n);
  
  while (n>0){
    r=n%10;
    printf("%d",r);
    a=pow(r,3);
    sum+=a;
    n=n/10;
  }
  
  printf("\n%d",sum);
}
