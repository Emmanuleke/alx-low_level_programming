#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes here */
/* betty style doc for function main goes here */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* my code goes there */
printf("%d", n);
if (n < 0)
printf(" is negative\n");
else if (n > 0)
printf(" is positive\n");
else
printf(" is zero\n");
return (0);

}
