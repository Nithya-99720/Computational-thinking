# include<stdio.h>
# include<ctype.h>
int calculate_points(char c){
char input;
printf("Enter a character:");
scanf("%c",&input);
if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
{
return 5;
}
else if(isdigit(c)){
return 10;
}
else
{
return 0;
}
}
int main()
{
char input;
printf("Enter a character:");
scanf("%c",&input);

int points = calculate_points(input);
printf("you scored %d points.\n",points);
 }
