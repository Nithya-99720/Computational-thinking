#include <stdio.h>
int main()
{
int x=0,y=1;
if (x++&&++y);//if semicolon then it take as null statement ,if not it consider as if block;
{
printf("x=%d,y=%d",x,y);
}
/*else
{
printf("Flase");
}*/
}
