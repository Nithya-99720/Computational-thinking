#include<stdio.h>
int main()
{
float b,h,a,c,area,pri;
printf ("Enter sides of a triangle and height of a triangle");
scanf ("%f%f%f%f",&a,&b,&c,&h);
area=0.5*b*h;
pri=a+b+c;
printf ("The area of triangle:%f\n",area);
printf ("The primeter of triangle:%f\n",pri);

}
