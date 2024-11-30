#include<stdio.h>
int welcome()
//Function definition
{
printf("Welcome to C\n");
}

#include<stdio.h>
int welcome ();
//Function declaration/prototype
int main() // main() starts the program execution
{
printf("Before welcome\n");
welcome(); //Function Call
printf("after welcome\n");
}
