//write a c program to calculate the speed of a vehicle
# include<stdio.h>
int main()
{
float v,d,t;
printf ("Enter distance and time taken by a vehicle:");
scanf ("%f%f",&d,&t);
v=d/t;
printf ("The total speed of a vehicle is:%f/n",v);
}
