#include<stdio.h>
int main()
{
int i;
for(i=1; i<=10; i++)
{
if(i==4)
{
continue; //skips the current iteration and continue with next iteration
}
//break;
printf("%d\t", i); //1 2 3 4 break
// 1 2 3 4 6 7 8 9 10 continue
}
}
