# include<stdio.h>
int main()
{
int height;
printf ("Enter the height of a person:");
scanf ("%d",&height);
if (height >160)
printf ("The person is tall");
else if (height<=160 && height>=130)
printf ("the person is avrage height");
else 
printf ("The person is short");
}
