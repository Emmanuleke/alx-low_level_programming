#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes here */
/* 0-positive_or_negative.c */
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
