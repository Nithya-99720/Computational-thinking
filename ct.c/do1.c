#include <stdio.h>
int main()
{
float c = 5, no = 10;
do {
no /= c;
} while(c--);
printf ("%f\n", no);
return 0;
}
