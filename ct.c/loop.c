#include<stdio.h>
int main()
{
int i = 1, j = 1;
for(--i && j++ ; i<10; i+=2)
{
printf("loop ");
}
return 0;
}
