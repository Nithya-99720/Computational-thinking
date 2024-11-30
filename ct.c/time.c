//convert a given integer (in sec) to hours,mintues,seconds
# include<stdio.h>
int main()
{
int a,s,m,h;
printf ("enter seconds in integer");
scanf ("%d",&s);
h=a/3600;
m=(a-h*3600)/60;
s=(a-(h*3600)-m*60);
printf ("hours:%d/n min:%d/n sec:%d/n",h,m,s);
}
